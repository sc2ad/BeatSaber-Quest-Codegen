#pragma once

#include "config.hpp"
#include "concepts.hpp"
#include "exceptions.hpp"
#include "box-utils.hpp"
#include <type_traits>
#include <sstream>
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

namespace cordl_internals {
#pragma region extract values
template<typename T>
    CORDL_HIDDEN void* ExtractValue(T& arg)  {
        return const_cast<void*>(static_cast<void*>(&arg));
    }

    template<typename T>
    CORDL_HIDDEN void* ExtractValue(T&& arg)  {
        return const_cast<void*>(&arg);
    }

    template<>
    CORDL_HIDDEN constexpr void* ExtractValue<Il2CppType*>(Il2CppType*&&) { return nullptr; }

    template<>
    CORDL_HIDDEN constexpr void* ExtractValue<Il2CppClass*>(Il2CppClass*&&) { return nullptr; }

    template<>
    CORDL_HIDDEN void* ExtractValue<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType& arg) {
        if (arg) { // is it even a set value
            il2cpp_functions::Init();
            auto k = il2cpp_functions::object_get_class(static_cast<Il2CppObject*>(arg));
            if (k && !k->nullabletype) {
                // boxed value type, unbox it
                return il2cpp_functions::object_unbox(static_cast<Il2CppObject*>(arg));
            }
            return arg.convert();
        } else {
            return nullptr;
        }
    }

    template<il2cpp_convertible T>
    requires(!std::is_same_v<T, ::bs_hook::Il2CppWrapperType>)
    CORDL_HIDDEN constexpr void* ExtractValue(T& arg) { return arg.convert(); }

    CORDL_HIDDEN inline auto ExtractValues() {
        return ::std::vector<void*>();
    }

    template<typename T, typename... TArgs>
    CORDL_HIDDEN std::vector<void*> ExtractValues(T&& arg, TArgs&& ...args) {
        auto firstVal = ExtractValue(arg);
        auto otherVals = ExtractValues(args...);
        otherVals.insert(otherVals.begin(), firstVal);
        return otherVals;
    }

#pragma endregion // extract values

#pragma region extract type values
    template<typename T>
    CORDL_HIDDEN void* ExtractTypeValue(T& arg) {
        return const_cast<void*>(static_cast<void const*>(&arg));
    }

    template<typename T>
    CORDL_HIDDEN void* ExtractTypeValue(T&& arg) {
        return const_cast<void*>(static_cast<void const*>(&arg));
    }

    template<>
    CORDL_HIDDEN constexpr void* ExtractTypeValue<std::nullptr_t>(std::nullptr_t&) { return nullptr; }

    template<>
    CORDL_HIDDEN constexpr void* ExtractTypeValue<std::nullptr_t>(std::nullptr_t&&) { return nullptr; }

    template<>
    CORDL_HIDDEN void* ExtractTypeValue<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType& arg) {
        if (arg) { // is it even a set value
            il2cpp_functions::Init();
            auto k = il2cpp_functions::object_get_class(static_cast<Il2CppObject*>(arg));
            if (k && !k->nullabletype) {
                // boxed value type, unbox it
                return il2cpp_functions::object_unbox(static_cast<Il2CppObject*>(arg));
            }
            return arg.convert();
        } else {
            return nullptr;
        }
    }

    template<>
    CORDL_HIDDEN void* ExtractTypeValue<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType&& arg) {
        if (arg) { // is it even a set value
            il2cpp_functions::Init();
            auto k = il2cpp_functions::object_get_class(static_cast<Il2CppObject*>(arg));
            if (k && !k->nullabletype) {
                // boxed value type, unbox it
                return il2cpp_functions::object_unbox(static_cast<Il2CppObject*>(arg));
            }
            return arg.convert();
        } else {
            return nullptr;
        }
    }

    template<il2cpp_convertible T>
    requires(!std::is_same_v<T, ::bs_hook::Il2CppWrapperType>)
    CORDL_HIDDEN constexpr void* ExtractTypeValue(T& arg) { return arg.convert(); }

    template<il2cpp_convertible T>
    requires(!std::is_same_v<T, ::bs_hook::Il2CppWrapperType>)
    CORDL_HIDDEN constexpr void* ExtractTypeValue(T&& arg) { return arg.convert(); }

#pragma endregion // extract type values

#pragma region extract type
    template <typename T> CORDL_HIDDEN Il2CppType const* ExtractType() {
        return ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()
            .value_or(nullptr);
    }

    template <typename T> CORDL_HIDDEN Il2CppType const* ExtractType(T&& arg) {
        return ::il2cpp_utils::il2cpp_type_check::il2cpp_arg_type<T>::get(arg)
            .value_or(nullptr);
    }

    CORDL_HIDDEN auto ExtractTypes() {
        return std::vector<Il2CppType const*>();
    }

    template <typename T, typename... TArgs>
    CORDL_HIDDEN std::vector<Il2CppType const*> ExtractTypes(T&& arg,
                                                             TArgs&&... args) {
        auto tFirst = ExtractType(arg);
        auto tOthers = ExtractTypes(args...);
        if (tFirst) tOthers.insert(tOthers.begin(), tFirst);
        return tOthers;
    }

#pragma endregion // extract type
    template <typename TOut = void, bool checkTypes = true, typename T,
              typename... TArgs>
    CORDL_HIDDEN TOut RunMethodRethrow(T&& instance, MethodInfo const* method,
                                       TArgs&&... params) {
        CRASH_UNLESS(method);

        if constexpr (il2cpp_reference_type<T>) {
            if ((method->flags & METHOD_ATTRIBUTE_STATIC) == 0) { // method is instance method
                if (!instance.convert()) {
                    // if instance.convert() is false, we are dealing with a nullptr instance, and the instance method call is a bad idea
                    std::stringstream str;
                    // FIXME: should we use this string, or something else? log a stacktrace?
                    str << "Instance was null for method call of "; str << method->klass->name; str << "::"; str << method->name;
                    throw NullException(str.str());
                }
            }
        }

        if constexpr (checkTypes && sizeof...(TArgs) > 0) { // param type check
            std::array<Il2CppType const*, sizeof...(TArgs)> types{ ExtractType(
                params)... };
            // TODO: check types array against types in methodinfo

            auto outType = ExtractType<TOut>();
            if (outType) {
                // TODO: check return type against methodinfo return type
            }
        }

        // get the instance value, regardless of if it is boxed or anything
        auto inst = ExtractValue(instance);
        Il2CppException* exp = nullptr;
        std::array<void*, sizeof...(params)> invokeParams{ExtractTypeValue(params)...};
        il2cpp_functions::Init();
        auto* ret = il2cpp_functions::runtime_invoke(method, instance, invokeParams.data(), &exp);

        // an exception was thrown, rethrow it!
        if (exp) throw il2cpp_utils::RunMethodException(exp, method);

        if constexpr (!std::is_same_v<void, TOut>) { // return type is not void, we should return something!
            return Unbox<TOut>(::bs_hook::Il2CppWrapperType(ret));
        }
    }
}
