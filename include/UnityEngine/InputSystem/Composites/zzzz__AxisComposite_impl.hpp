#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__AxisComposite_def.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__AxisComposite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins  UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins::Neither{0};
constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins  UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins::Positive{1};
constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins  UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins::Negative{2};
//  Writing Method size for method: UnityEngine::InputSystem::Composites::AxisComposite.get_midPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Composites::AxisComposite::*)()>(&UnityEngine::InputSystem::Composites::AxisComposite::get_midPoint)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28c814c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::AxisComposite>::get(),
                            "get_midPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Composites::AxisComposite.ReadValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Composites::AxisComposite::*)(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::InputSystem::Composites::AxisComposite::ReadValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x28c8160;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Composites::AxisComposite),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::AxisComposite>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Composites::AxisComposite.EvaluateMagnitude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Composites::AxisComposite::*)(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::InputSystem::Composites::AxisComposite::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x28c8280;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Composites::AxisComposite),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::AxisComposite>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Composites::AxisComposite._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Composites::AxisComposite::*)()>(&UnityEngine::InputSystem::Composites::AxisComposite::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x28c82cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::AxisComposite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__set_negative(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::AxisComposite::__get_negative() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__set_positive(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Composites::AxisComposite::__get_positive() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__set_minValue(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::Composites::AxisComposite::__get_minValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__set_maxValue(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::Composites::AxisComposite::__get_maxValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__set_whichSideWins(UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins>(value));
}
constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins UnityEngine::InputSystem::Composites::AxisComposite::__get_whichSideWins() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t UnityEngine::InputSystem::Composites::AxisComposite::get_midPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::AxisComposite>::get(),
                            "get_midPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::InputSystem::Composites::AxisComposite::ReadValue(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::AxisComposite>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, context);
}
 float_t UnityEngine::InputSystem::Composites::AxisComposite::EvaluateMagnitude(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::AxisComposite>::get(),
                            "EvaluateMagnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputBindingCompositeContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, context);
}
 UnityEngine::InputSystem::Composites::AxisComposite UnityEngine::InputSystem::Composites::AxisComposite::New_ctor()  {
UnityEngine::InputSystem::Composites::AxisComposite o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Composites::AxisComposite>())};
return o;
}
 void UnityEngine::InputSystem::Composites::AxisComposite::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Composites::AxisComposite>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
