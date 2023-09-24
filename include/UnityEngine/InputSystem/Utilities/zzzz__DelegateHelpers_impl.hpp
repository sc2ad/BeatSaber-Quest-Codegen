#pragma once
#include "UnityEngine/InputSystem/Utilities/zzzz__DelegateHelpers_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::DelegateHelpers.InvokeCallbacksSafe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action>>, ::StringW, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x297cd94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::DelegateHelpers>::get(),
                            "InvokeCallbacksSafe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
/// @param context: ::bs_hook::Il2CppWrapperType (default: csnull)
 void UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe(ByRef<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action>> callbacks, ::StringW callbackName, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::DelegateHelpers>::get(),
                            "InvokeCallbacksSafe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callbacks, callbackName, context);
}
/// @param context: ::bs_hook::Il2CppWrapperType (default: csnull)
template<typename TValue>
 void UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe(ByRef<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<TValue>>> callbacks, TValue argument, ::StringW callbackName, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::DelegateHelpers>::get(),
                        "InvokeCallbacksSafe",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<TValue>>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callbacks, argument, callbackName, context);
}
/// @param context: ::bs_hook::Il2CppWrapperType (default: csnull)
template<typename TValue1,typename TValue2>
 void UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe(ByRef<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<TValue1,TValue2>>> callbacks, TValue1 argument1, TValue2 argument2, ::StringW callbackName, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::DelegateHelpers>::get(),
                        "InvokeCallbacksSafe",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<TValue1,TValue2>>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callbacks, argument1, argument2, callbackName, context);
}
/// @param context: ::bs_hook::Il2CppWrapperType (default: csnull)
template<typename TValue1,typename TValue2>
 bool UnityEngine::InputSystem::Utilities::DelegateHelpers::InvokeCallbacksSafe_AnyCallbackReturnsTrue(ByRef<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Func_3<TValue1,TValue2,bool>>> callbacks, TValue1 argument1, TValue2 argument2, ::StringW callbackName, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::DelegateHelpers>::get(),
                        "InvokeCallbacksSafe_AnyCallbackReturnsTrue",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Func_3<TValue1,TValue2,bool>>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, callbacks, argument1, argument2, callbackName, context);
}
