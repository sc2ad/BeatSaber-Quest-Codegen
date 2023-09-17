#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b81478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction::*)()>(&::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction::Invoke)> {
  constexpr static std::size_t size = 0x1014;
  constexpr static std::size_t addrs = 0x2b81534;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction>(object, method))) {}
 void ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::LowLevel::PlayerLoopSystem.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::LowLevel::PlayerLoopSystem::*)()>(&::UnityEngine::LowLevel::PlayerLoopSystem::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b81458;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::LowLevel::PlayerLoopSystem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::PlayerLoopSystem>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: Some("csnull") }, CppParam { name: "subSystemList", ty: "::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "updateDelegate", ty: "::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction", modifiers: "", def_value: Some("csnull") }, CppParam { name: "updateFunction", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "loopConditionFunction", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem::PlayerLoopSystem(::System::Type type, ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> subSystemList, ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction updateDelegate, ::cordl_internals::intptr_t updateFunction, ::cordl_internals::intptr_t loopConditionFunction) noexcept : ::bs_hook::ValueTypeWrapper() {this->type = type;
this->subSystemList = subSystemList;
this->updateDelegate = updateDelegate;
this->updateFunction = updateFunction;
this->loopConditionFunction = loopConditionFunction;
}
constexpr void ::UnityEngine::LowLevel::PlayerLoopSystem::__set_type(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x0>(this->__instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::UnityEngine::LowLevel::PlayerLoopSystem::__get_type() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::LowLevel::PlayerLoopSystem::__set_subSystemList(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>, 0x8>(this->__instance, std::forward<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>>(value));
}
constexpr ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> ::UnityEngine::LowLevel::PlayerLoopSystem::__get_subSystemList() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::LowLevel::PlayerLoopSystem::__set_updateDelegate(::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction value)  {
::cordl_internals::setInstanceField<::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction, 0x10>(this->__instance, std::forward<::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction>(value));
}
constexpr ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction ::UnityEngine::LowLevel::PlayerLoopSystem::__get_updateDelegate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::LowLevel::PlayerLoopSystem::__set_updateFunction(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::LowLevel::PlayerLoopSystem::__get_updateFunction() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance);
}
constexpr void ::UnityEngine::LowLevel::PlayerLoopSystem::__set_loopConditionFunction(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x20>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::LowLevel::PlayerLoopSystem::__get_loopConditionFunction() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x20>(this->__instance);
}
 ::StringW ::UnityEngine::LowLevel::PlayerLoopSystem::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LowLevel::PlayerLoopSystem>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
