#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Threading/zzzz__Volatile_def.hpp"
// Ctor Parameters [CppParam { name: "Value", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr System::Threading::System__Threading__Volatile__VolatileBoolean::System__Threading__Volatile__VolatileBoolean(bool Value) noexcept : ::bs_hook::ValueTypeWrapper() {this->Value = Value;
}
constexpr void System::Threading::System__Threading__Volatile__VolatileBoolean::__set_Value(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Threading::System__Threading__Volatile__VolatileBoolean::__get_Value() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
// Ctor Parameters [CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Threading::System__Threading__Volatile__VolatileInt32::System__Threading__Volatile__VolatileInt32(int32_t Value) noexcept : ::bs_hook::ValueTypeWrapper() {this->Value = Value;
}
constexpr void System::Threading::System__Threading__Volatile__VolatileInt32::__set_Value(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::System__Threading__Volatile__VolatileInt32::__get_Value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
// Ctor Parameters [CppParam { name: "Value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }]
constexpr System::Threading::System__Threading__Volatile__VolatileObject::System__Threading__Volatile__VolatileObject(::bs_hook::Il2CppWrapperType Value) noexcept : ::bs_hook::ValueTypeWrapper() {this->Value = Value;
}
constexpr void System::Threading::System__Threading__Volatile__VolatileObject::__set_Value(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x0>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Threading::System__Threading__Volatile__VolatileObject::__get_Value() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x0>(this->__instance);
}
//  Writing Method size for method: System::Threading::Volatile.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<bool>)>(&System::Threading::Volatile::Read)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24b35fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Volatile>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Volatile.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<bool>, bool)>(&System::Threading::Volatile::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24b3614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Volatile>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Volatile.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<int32_t>)>(&System::Threading::Volatile::Read)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24b3638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Volatile>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Volatile.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int32_t>, int32_t)>(&System::Threading::Volatile::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24b3650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Volatile>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 bool System::Threading::Volatile::Read(ByRef<bool> location)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Volatile>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, location);
}
 void System::Threading::Volatile::Write(ByRef<bool> location, bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Volatile>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, location, value);
}
 int32_t System::Threading::Volatile::Read(ByRef<int32_t> location)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Volatile>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, location);
}
 void System::Threading::Volatile::Write(ByRef<int32_t> location, int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Volatile>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, location, value);
}
template<typename T>
 T System::Threading::Volatile::Read(ByRef<T> location)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Volatile>::get(),
                        "Read",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, location);
}
template<typename T>
 void System::Threading::Volatile::Write(ByRef<T> location, T value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Volatile>::get(),
                        "Write",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, location, value);
}
