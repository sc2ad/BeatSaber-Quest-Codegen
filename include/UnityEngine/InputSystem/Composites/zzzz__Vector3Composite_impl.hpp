#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__Vector3Composite_def.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__Vector3Composite_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector3Composite__Mode::UnityEngine__InputSystem__Composites__Vector3Composite__Mode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector3Composite__Mode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector3Composite__Mode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector3Composite__Mode  UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector3Composite__Mode::Analog{0};
constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector3Composite__Mode  UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector3Composite__Mode::DigitalNormalized{1};
constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector3Composite__Mode  UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector3Composite__Mode::Digital{2};
//  Writing Method size for method: UnityEngine::InputSystem::Composites::Vector3Composite.ReadValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::InputSystem::Composites::Vector3Composite::*)(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::InputSystem::Composites::Vector3Composite::ReadValue)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x28c92bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Composites::Vector3Composite),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::Vector3Composite>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Composites::Vector3Composite._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Composites::Vector3Composite::*)()>(&UnityEngine::InputSystem::Composites::Vector3Composite::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x28c9510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::Vector3Composite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_up(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::Vector3Composite::__get_up() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_down(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::Vector3Composite::__get_down() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_left(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::Vector3Composite::__get_left() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_right(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::Vector3Composite::__get_right() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_forward(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::Vector3Composite::__get_forward() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_backward(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::Vector3Composite::__get_backward() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_mode(UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector3Composite__Mode value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector3Composite__Mode, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector3Composite__Mode>(value));
}
constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector3Composite__Mode UnityEngine::InputSystem::Composites::Vector3Composite::__get_mode() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector3Composite__Mode, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Vector3 UnityEngine::InputSystem::Composites::Vector3Composite::ReadValue(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::Vector3Composite>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, context);
}
 UnityEngine::InputSystem::Composites::Vector3Composite UnityEngine::InputSystem::Composites::Vector3Composite::New_ctor()  {
UnityEngine::InputSystem::Composites::Vector3Composite o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Composites::Vector3Composite>())};
return o;
}
 void UnityEngine::InputSystem::Composites::Vector3Composite::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::Vector3Composite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
