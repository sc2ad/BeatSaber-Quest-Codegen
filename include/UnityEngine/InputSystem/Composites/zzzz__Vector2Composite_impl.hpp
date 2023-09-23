#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__Vector2Composite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode::UnityEngine__InputSystem__Composites__Vector2Composite__Mode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode  UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode::Analog{2};
constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode  UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode::DigitalNormalized{0};
constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode  UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode::Digital{1};
//  Writing Method size for method: UnityEngine::InputSystem::Composites::Vector2Composite.ReadValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::InputSystem::Composites::Vector2Composite::*)(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::InputSystem::Composites::Vector2Composite::ReadValue)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x28c9098;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Composites::Vector2Composite),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::Vector2Composite>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Composites::Vector2Composite.EvaluateMagnitude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Composites::Vector2Composite::*)(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::InputSystem::Composites::Vector2Composite::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x28c91fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Composites::Vector2Composite),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::Vector2Composite>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Composites::Vector2Composite._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Composites::Vector2Composite::*)()>(&UnityEngine::InputSystem::Composites::Vector2Composite::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x28c926c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::Vector2Composite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Composites::Vector2Composite::__set_up(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::Vector2Composite::__get_up() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::Vector2Composite::__set_down(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::Vector2Composite::__get_down() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::Vector2Composite::__set_left(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::Vector2Composite::__get_left() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::Vector2Composite::__set_right(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::Vector2Composite::__get_right() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::Vector2Composite::__set_normalize(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Composites::Vector2Composite::__get_normalize() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::Vector2Composite::__set_mode(UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode>(value));
}
constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode UnityEngine::InputSystem::Composites::Vector2Composite::__get_mode() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Vector2 UnityEngine::InputSystem::Composites::Vector2Composite::ReadValue(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::Vector2Composite>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, context);
}
 float_t UnityEngine::InputSystem::Composites::Vector2Composite::EvaluateMagnitude(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::Vector2Composite>::get(),
                            "EvaluateMagnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, context);
}
// Ctor Parameters []
 UnityEngine::InputSystem::Composites::Vector2Composite::Vector2Composite()  : UnityEngine::InputSystem::InputBindingComposite_1<UnityEngine::Vector2>(THROW_UNLESS(::il2cpp_utils::New<Vector2Composite>())) {}
 void UnityEngine::InputSystem::Composites::Vector2Composite::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::Vector2Composite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
