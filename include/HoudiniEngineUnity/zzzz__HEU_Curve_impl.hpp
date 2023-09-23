#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Curve_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__CurveNodeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Parameters_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState::HoudiniEngineUnity__HEU_Curve__CurveEditState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState::INVALID{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState::GENERATED{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState::EDITING{2};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState::REQUIRES_GENERATION{3};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction::HoudiniEngineUnity__HEU_Curve__Interaction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction  HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction::VIEW{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction  HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction::ADD{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction  HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction::EDIT{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision  HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision::COLLIDERS{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision  HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision::LAYERMASK{1};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdfb54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0._UpdateCurveInputForCustomAttributes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::*)(HoudiniEngineUnity::CurveNodeData)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::_UpdateCurveInputForCustomAttributes_b__0)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x1fe1a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0>::get(),
                            "<UpdateCurveInputForCustomAttributes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::CurveNodeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0._UpdateCurveInputForCustomAttributes_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::*)(int32_t, int32_t, float_t, int32_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::_UpdateCurveInputForCustomAttributes_b__1)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x1fe1c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0>::get(),
                            "<UpdateCurveInputForCustomAttributes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0._UpdateCurveInputForCustomAttributes_b__2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::*)(int32_t, int32_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::_UpdateCurveInputForCustomAttributes_b__2)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x1fe1fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0>::get(),
                            "<UpdateCurveInputForCustomAttributes>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::__set_positions(System::Collections::Generic::List_1<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Vector3>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::__get_positions() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::__set_rotations(System::Collections::Generic::List_1<UnityEngine::Quaternion> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Quaternion>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Quaternion>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Quaternion> HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::__get_rotations() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Quaternion>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::__set_scales(System::Collections::Generic::List_1<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector3>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Vector3>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::__get_scales() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector3>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0>())) {}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::_UpdateCurveInputForCustomAttributes_b__0(HoudiniEngineUnity::CurveNodeData data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0>::get(),
                            "<UpdateCurveInputForCustomAttributes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::CurveNodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::_UpdateCurveInputForCustomAttributes_b__1(int32_t nIndex1, int32_t nIndex2, float_t fCoeff, int32_t nInsertIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0>::get(),
                            "<UpdateCurveInputForCustomAttributes>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nIndex1, nIndex2, fCoeff, nInsertIndex);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0::_UpdateCurveInputForCustomAttributes_b__2(int32_t nIndex, int32_t nInsertIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0>::get(),
                            "<UpdateCurveInputForCustomAttributes>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nIndex, nInsertIndex);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe062c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0._UpdatePoints_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0::*)(HoudiniEngineUnity::CurveNodeData)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0::_UpdatePoints_b__0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1fe22bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0>::get(),
                            "<UpdatePoints>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::CurveNodeData>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0::__set_rotations(System::Collections::Generic::List_1<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Vector3>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0::__get_rotations() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0::__set_scales(System::Collections::Generic::List_1<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector3>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Vector3>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0::__get_scales() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector3>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0>())) {}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0::_UpdatePoints_b__0(HoudiniEngineUnity::CurveNodeData data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0>::get(),
                            "<UpdatePoints>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::CurveNodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0._GetAllPoints_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0::*)(HoudiniEngineUnity::CurveNodeData)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0::_GetAllPoints_b__0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1fe23dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0>::get(),
                            "<GetAllPoints>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::CurveNodeData>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0::__set_points(System::Collections::Generic::List_1<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Vector3>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0::__get_points() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0>())) {}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0::_GetAllPoints_b__0(HoudiniEngineUnity::CurveNodeData transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0>::get(),
                            "<GetAllPoints>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::CurveNodeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transform);
}
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.get_GeoID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::HEU_Curve::*)()>(&HoudiniEngineUnity::HEU_Curve::get_GeoID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdd8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "get_GeoID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.get_CurveNodeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> (HoudiniEngineUnity::HEU_Curve::*)()>(&HoudiniEngineUnity::HEU_Curve::get_CurveNodeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdd900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "get_CurveNodeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.IsEditable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Curve::*)()>(&HoudiniEngineUnity::HEU_Curve::IsEditable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdd908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "IsEditable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.get_Parameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_Parameters (HoudiniEngineUnity::HEU_Curve::*)()>(&HoudiniEngineUnity::HEU_Curve::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdd910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.SetUploadParameterPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(bool)>(&HoudiniEngineUnity::HEU_Curve::SetUploadParameterPreset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fdd918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SetUploadParameterPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.get_CurveName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HoudiniEngineUnity::HEU_Curve::*)()>(&HoudiniEngineUnity::HEU_Curve::get_CurveName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdd924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "get_CurveName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.IsGeoCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Curve::*)()>(&HoudiniEngineUnity::HEU_Curve::IsGeoCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdd92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "IsGeoCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.get_EditState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState (HoudiniEngineUnity::HEU_Curve::*)()>(&HoudiniEngineUnity::HEU_Curve::get_EditState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdd934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "get_EditState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.get_ParentAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_HoudiniAsset (HoudiniEngineUnity::HEU_Curve::*)()>(&HoudiniEngineUnity::HEU_Curve::get_ParentAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdd93c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "get_ParentAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.CreateSetupCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_Curve (*)(HoudiniEngineUnity::HEU_HoudiniAsset, bool, ::StringW, int32_t, bool)>(&HoudiniEngineUnity::HEU_Curve::CreateSetupCurve)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x1fdd944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "CreateSetupCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.DestroyAllData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(bool)>(&HoudiniEngineUnity::HEU_Curve::DestroyAllData)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1fddb9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "DestroyAllData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.SetCurveName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(::StringW)>(&HoudiniEngineUnity::HEU_Curve::SetCurveName)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fddce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SetCurveName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.UploadParameterPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, HoudiniEngineUnity::HEU_HoudiniAsset)>(&HoudiniEngineUnity::HEU_Curve::UploadParameterPreset)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1fddd84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "UploadParameterPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.ResetCurveParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_HoudiniAsset)>(&HoudiniEngineUnity::HEU_Curve::ResetCurveParameters)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1fdde6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "ResetCurveParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.SetCurveParameterPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_HoudiniAsset, ::ArrayW<uint8_t>)>(&HoudiniEngineUnity::HEU_Curve::SetCurveParameterPreset)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1fddf3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SetCurveParameterPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.UpdateCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(HoudiniEngineUnity::HEU_SessionBase, int32_t)>(&HoudiniEngineUnity::HEU_Curve::UpdateCurve)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x1fde00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "UpdateCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.GenerateMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_Curve::GenerateMesh)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x1fde1f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GenerateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.UpdateCurveInputForCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Curve::*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_HoudiniAsset)>(&HoudiniEngineUnity::HEU_Curve::UpdateCurveInputForCustomAttributes)> {
  constexpr static std::size_t size = 0x15ac;
  constexpr static std::size_t addrs = 0x1fde5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "UpdateCurveInputForCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.SyncFromParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_HoudiniAsset)>(&HoudiniEngineUnity::HEU_Curve::SyncFromParameters)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x1fdfdbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SyncFromParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.UpdatePoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(HoudiniEngineUnity::HEU_SessionBase, int32_t)>(&HoudiniEngineUnity::HEU_Curve::UpdatePoints)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x1fe0030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "UpdatePoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.ProjectToColliders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(HoudiniEngineUnity::HEU_HoudiniAsset, UnityEngine::Vector3, float_t)>(&HoudiniEngineUnity::HEU_Curve::ProjectToColliders)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x1fe0634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "ProjectToColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.GetPointsString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData>)>(&HoudiniEngineUnity::HEU_Curve::GetPointsString)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x1fe0b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetPointsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.GetPointsString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Collections::Generic::List_1<UnityEngine::Vector3>)>(&HoudiniEngineUnity::HEU_Curve::GetPointsString)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1fdfb5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetPointsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.SetEditState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState)>(&HoudiniEngineUnity::HEU_Curve::SetEditState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe0d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SetEditState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.SetCurvePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(int32_t, UnityEngine::Vector3)>(&HoudiniEngineUnity::HEU_Curve::SetCurvePoint)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1fe0d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SetCurvePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.GetCurvePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (HoudiniEngineUnity::HEU_Curve::*)(int32_t)>(&HoudiniEngineUnity::HEU_Curve::GetCurvePoint)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1fe0e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetCurvePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.GetAllPointTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> (HoudiniEngineUnity::HEU_Curve::*)()>(&HoudiniEngineUnity::HEU_Curve::GetAllPointTransforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe0ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetAllPointTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.GetAllPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::Vector3> (HoudiniEngineUnity::HEU_Curve::*)()>(&HoudiniEngineUnity::HEU_Curve::GetAllPoints)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1fe0f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetAllPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.GetNumPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::HEU_Curve::*)()>(&HoudiniEngineUnity::HEU_Curve::GetNumPoints)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1fe1028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetNumPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.GetTransformedPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (HoudiniEngineUnity::HEU_Curve::*)(int32_t)>(&HoudiniEngineUnity::HEU_Curve::GetTransformedPoint)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1fe1070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetTransformedPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.GetTransformedPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (HoudiniEngineUnity::HEU_Curve::*)(UnityEngine::Vector3)>(&HoudiniEngineUnity::HEU_Curve::GetTransformedPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fe1138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetTransformedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.GetInvertedTransformedPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (HoudiniEngineUnity::HEU_Curve::*)(UnityEngine::Vector3)>(&HoudiniEngineUnity::HEU_Curve::GetInvertedTransformedPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fe1188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetInvertedTransformedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.GetInvertedTransformedDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (HoudiniEngineUnity::HEU_Curve::*)(UnityEngine::Vector3)>(&HoudiniEngineUnity::HEU_Curve::GetInvertedTransformedDirection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fe11d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetInvertedTransformedDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.GetVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector3> (HoudiniEngineUnity::HEU_Curve::*)()>(&HoudiniEngineUnity::HEU_Curve::GetVertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe1228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.SetCurveGeometryVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(bool)>(&HoudiniEngineUnity::HEU_Curve::SetCurveGeometryVisibility)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1fe1230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SetCurveGeometryVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.DownloadPresetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_Curve::DownloadPresetData)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1fe0594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "DownloadPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.UploadPresetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_Curve::UploadPresetData)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1fe1318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "UploadPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.DownloadAsDefaultPresetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_Curve::DownloadAsDefaultPresetData)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1fe13b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "DownloadAsDefaultPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.DuplicateCurveNodeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> (HoudiniEngineUnity::HEU_Curve::*)()>(&HoudiniEngineUnity::HEU_Curve::DuplicateCurveNodeData)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x1fe1448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "DuplicateCurveNodeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.SetCurveNodeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)(System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData>)>(&HoudiniEngineUnity::HEU_Curve::SetCurveNodeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fe166c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SetCurveNodeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Curve::*)(HoudiniEngineUnity::HEU_Curve)>(&HoudiniEngineUnity::HEU_Curve::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x1fe1674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_Curve>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_Curve._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Curve::*)()>(&HoudiniEngineUnity::HEU_Curve::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1fe19e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_Curve>
constexpr  HoudiniEngineUnity::HEU_Curve::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_Curve>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_Curve>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__geoID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_Curve::__get__geoID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__curveNodeData(System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> HoudiniEngineUnity::HEU_Curve::__get__curveNodeData() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__vertices(::ArrayW<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Vector3>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<UnityEngine::Vector3> HoudiniEngineUnity::HEU_Curve::__get__vertices() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Vector3>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__isEditable(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_Curve::__get__isEditable() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__parameters(HoudiniEngineUnity::HEU_Parameters value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HEU_Parameters, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HEU_Parameters>(value));
}
constexpr HoudiniEngineUnity::HEU_Parameters HoudiniEngineUnity::HEU_Curve::__get__parameters() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HEU_Parameters, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__bUploadParameterPreset(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_Curve::__get__bUploadParameterPreset() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__curveName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_Curve::__get__curveName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__targetGameObject(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject HoudiniEngineUnity::HEU_Curve::__get__targetGameObject() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__isGeoCurve(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_Curve::__get__isGeoCurve() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__editState(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState HoudiniEngineUnity::HEU_Curve::__get__editState() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HoudiniEngineUnity::HEU_Curve::__set_PreferredNextInteractionMode(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction value)  {
::cordl_internals::setStaticField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction, "PreferredNextInteractionMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get>(std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction>(value));
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction HoudiniEngineUnity::HEU_Curve::__get_PreferredNextInteractionMode()  {
return ::cordl_internals::getStaticField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction, "PreferredNextInteractionMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get>();
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__parentAsset(HoudiniEngineUnity::HEU_HoudiniAsset value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HEU_HoudiniAsset, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HEU_HoudiniAsset>(value));
}
constexpr HoudiniEngineUnity::HEU_HoudiniAsset HoudiniEngineUnity::HEU_Curve::__get__parentAsset() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HEU_HoudiniAsset, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t HoudiniEngineUnity::HEU_Curve::get_GeoID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "get_GeoID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> HoudiniEngineUnity::HEU_Curve::get_CurveNodeData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "get_CurveNodeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HEU_Curve::IsEditable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "IsEditable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HEU_Parameters HoudiniEngineUnity::HEU_Curve::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_Parameters, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_Curve::SetUploadParameterPreset(bool bValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SetUploadParameterPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bValue);
}
 ::StringW HoudiniEngineUnity::HEU_Curve::get_CurveName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "get_CurveName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HEU_Curve::IsGeoCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "IsGeoCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState HoudiniEngineUnity::HEU_Curve::get_EditState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "get_EditState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HEU_HoudiniAsset HoudiniEngineUnity::HEU_Curve::get_ParentAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "get_ParentAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_HoudiniAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 HoudiniEngineUnity::HEU_Curve HoudiniEngineUnity::HEU_Curve::CreateSetupCurve(HoudiniEngineUnity::HEU_HoudiniAsset parentAsset, bool isEditable, ::StringW curveName, int32_t geoID, bool bGeoCurve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "CreateSetupCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_Curve, false>(nullptr, ___internal_method, parentAsset, isEditable, curveName, geoID, bGeoCurve);
}
/// @param bIsRebuild: bool (default: false)
 void HoudiniEngineUnity::HEU_Curve::DestroyAllData(bool bIsRebuild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "DestroyAllData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bIsRebuild);
}
 void HoudiniEngineUnity::HEU_Curve::SetCurveName(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SetCurveName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void HoudiniEngineUnity::HEU_Curve::UploadParameterPreset(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "UploadParameterPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, geoID, parentAsset);
}
 void HoudiniEngineUnity::HEU_Curve::ResetCurveParameters(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "ResetCurveParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, parentAsset);
}
 void HoudiniEngineUnity::HEU_Curve::SetCurveParameterPreset(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset, ::ArrayW<uint8_t> parameterPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SetCurveParameterPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, parentAsset, parameterPreset);
}
 void HoudiniEngineUnity::HEU_Curve::UpdateCurve(HoudiniEngineUnity::HEU_SessionBase session, int32_t partID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "UpdateCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, partID);
}
 void HoudiniEngineUnity::HEU_Curve::GenerateMesh(UnityEngine::GameObject inGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GenerateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inGameObject);
}
 bool HoudiniEngineUnity::HEU_Curve::UpdateCurveInputForCustomAttributes(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "UpdateCurveInputForCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, parentAsset);
}
 void HoudiniEngineUnity::HEU_Curve::SyncFromParameters(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SyncFromParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, parentAsset);
}
 void HoudiniEngineUnity::HEU_Curve::UpdatePoints(HoudiniEngineUnity::HEU_SessionBase session, int32_t partID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "UpdatePoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, partID);
}
 void HoudiniEngineUnity::HEU_Curve::ProjectToColliders(HoudiniEngineUnity::HEU_HoudiniAsset parentAsset, UnityEngine::Vector3 rayDirection, float_t rayDistance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "ProjectToColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parentAsset, rayDirection, rayDistance);
}
 ::StringW HoudiniEngineUnity::HEU_Curve::GetPointsString(System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> points)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetPointsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, points);
}
 ::StringW HoudiniEngineUnity::HEU_Curve::GetPointsString(System::Collections::Generic::List_1<UnityEngine::Vector3> points)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetPointsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, points);
}
 void HoudiniEngineUnity::HEU_Curve::SetEditState(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState editState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SetEditState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, editState);
}
 void HoudiniEngineUnity::HEU_Curve::SetCurvePoint(int32_t pointIndex, UnityEngine::Vector3 newPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SetCurvePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pointIndex, newPosition);
}
 UnityEngine::Vector3 HoudiniEngineUnity::HEU_Curve::GetCurvePoint(int32_t pointIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetCurvePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, pointIndex);
}
 System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> HoudiniEngineUnity::HEU_Curve::GetAllPointTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetAllPointTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::List_1<UnityEngine::Vector3> HoudiniEngineUnity::HEU_Curve::GetAllPoints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetAllPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::Vector3>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t HoudiniEngineUnity::HEU_Curve::GetNumPoints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetNumPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector3 HoudiniEngineUnity::HEU_Curve::GetTransformedPoint(int32_t pointIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetTransformedPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, pointIndex);
}
 UnityEngine::Vector3 HoudiniEngineUnity::HEU_Curve::GetTransformedPosition(UnityEngine::Vector3 inPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetTransformedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, inPosition);
}
 UnityEngine::Vector3 HoudiniEngineUnity::HEU_Curve::GetInvertedTransformedPosition(UnityEngine::Vector3 inPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetInvertedTransformedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, inPosition);
}
 UnityEngine::Vector3 HoudiniEngineUnity::HEU_Curve::GetInvertedTransformedDirection(UnityEngine::Vector3 inPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetInvertedTransformedDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, inPosition);
}
 ::ArrayW<UnityEngine::Vector3> HoudiniEngineUnity::HEU_Curve::GetVertices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "GetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Vector3>, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_Curve::SetCurveGeometryVisibility(bool bVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SetCurveGeometryVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bVisible);
}
 void HoudiniEngineUnity::HEU_Curve::DownloadPresetData(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "DownloadPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_Curve::UploadPresetData(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "UploadPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 void HoudiniEngineUnity::HEU_Curve::DownloadAsDefaultPresetData(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "DownloadAsDefaultPresetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> HoudiniEngineUnity::HEU_Curve::DuplicateCurveNodeData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "DuplicateCurveNodeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData>, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_Curve::SetCurveNodeData(System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> curveNodeData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "SetCurveNodeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curveNodeData);
}
 bool HoudiniEngineUnity::HEU_Curve::IsEquivalentTo(HoudiniEngineUnity::HEU_Curve other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_Curve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
// Ctor Parameters []
 HoudiniEngineUnity::HEU_Curve::HEU_Curve()  : UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<HEU_Curve>())) {}
 void HoudiniEngineUnity::HEU_Curve::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_Curve>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
