#pragma once
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__ButtonWithOneModifier_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Composites::ButtonWithOneModifier.ReadValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Composites::ButtonWithOneModifier::*)(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::InputSystem::Composites::ButtonWithOneModifier::ReadValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x28c8320;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Composites::ButtonWithOneModifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::ButtonWithOneModifier>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Composites::ButtonWithOneModifier.ModifierIsPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Composites::ButtonWithOneModifier::*)(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::InputSystem::Composites::ButtonWithOneModifier::ModifierIsPressed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28c8390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::ButtonWithOneModifier>::get(),
                            "ModifierIsPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Composites::ButtonWithOneModifier.EvaluateMagnitude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Composites::ButtonWithOneModifier::*)(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::InputSystem::Composites::ButtonWithOneModifier::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28c8410;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Composites::ButtonWithOneModifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::ButtonWithOneModifier>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Composites::ButtonWithOneModifier.FinishSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Composites::ButtonWithOneModifier::*)(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::InputSystem::Composites::ButtonWithOneModifier::FinishSetup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x28c841c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Composites::ButtonWithOneModifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::ButtonWithOneModifier>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Composites::ButtonWithOneModifier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Composites::ButtonWithOneModifier::*)()>(&UnityEngine::InputSystem::Composites::ButtonWithOneModifier::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x28c84ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::ButtonWithOneModifier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__set_modifier(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__get_modifier() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__set_button(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__get_button() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__set_overrideModifiersNeedToBePressedFirst(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__get_overrideModifiersNeedToBePressedFirst() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t UnityEngine::InputSystem::Composites::ButtonWithOneModifier::ReadValue(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::ButtonWithOneModifier>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, context);
}
 bool UnityEngine::InputSystem::Composites::ButtonWithOneModifier::ModifierIsPressed(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::ButtonWithOneModifier>::get(),
                            "ModifierIsPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context);
}
 float_t UnityEngine::InputSystem::Composites::ButtonWithOneModifier::EvaluateMagnitude(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::ButtonWithOneModifier>::get(),
                            "EvaluateMagnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::FinishSetup(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::ButtonWithOneModifier>::get(),
                            "FinishSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
// Ctor Parameters []
 UnityEngine::InputSystem::Composites::ButtonWithOneModifier::ButtonWithOneModifier()  : UnityEngine::InputSystem::InputBindingComposite_1<float_t>(THROW_UNLESS(::il2cpp_utils::New<ButtonWithOneModifier>())) {}
 void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::ButtonWithOneModifier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
