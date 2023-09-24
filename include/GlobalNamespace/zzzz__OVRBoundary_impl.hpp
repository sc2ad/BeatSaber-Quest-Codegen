#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_def.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__OVRNativeBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRBoundary__Node::GlobalNamespace__OVRBoundary__Node(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRBoundary__Node::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRBoundary__Node::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRBoundary__Node  GlobalNamespace::GlobalNamespace__OVRBoundary__Node::HandLeft{3};
constexpr GlobalNamespace::GlobalNamespace__OVRBoundary__Node  GlobalNamespace::GlobalNamespace__OVRBoundary__Node::HandRight{4};
constexpr GlobalNamespace::GlobalNamespace__OVRBoundary__Node  GlobalNamespace::GlobalNamespace__OVRBoundary__Node::Head{9};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType::GlobalNamespace__OVRBoundary__BoundaryType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType  GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType::OuterBoundary{1};
constexpr GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType  GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType::PlayArea{256};
// Ctor Parameters [CppParam { name: "IsTriggering", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClosestDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClosestPoint", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClosestPointNormal", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult::GlobalNamespace__OVRBoundary__BoundaryTestResult(bool IsTriggering, float_t ClosestDistance, UnityEngine::Vector3 ClosestPoint, UnityEngine::Vector3 ClosestPointNormal) noexcept : ::bs_hook::ValueTypeWrapper() {this->IsTriggering = IsTriggering;
this->ClosestDistance = ClosestDistance;
this->ClosestPoint = ClosestPoint;
this->ClosestPointNormal = ClosestPointNormal;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult::__set_IsTriggering(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult::__get_IsTriggering() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult::__set_ClosestDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult::__get_ClosestDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult::__set_ClosestPoint(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x8>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult::__get_ClosestPoint() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult::__set_ClosestPointNormal(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x14>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult::__get_ClosestPointNormal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x14>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::OVRBoundary.GetConfigured
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRBoundary::*)()>(&GlobalNamespace::OVRBoundary::GetConfigured)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x25a58a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            "GetConfigured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRBoundary.TestNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult (GlobalNamespace::OVRBoundary::*)(GlobalNamespace::GlobalNamespace__OVRBoundary__Node, GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType)>(&GlobalNamespace::OVRBoundary::TestNode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x25a96b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            "TestNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRBoundary__Node>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRBoundary.TestPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult (GlobalNamespace::OVRBoundary::*)(UnityEngine::Vector3, GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType)>(&GlobalNamespace::OVRBoundary::TestPoint)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x25a977c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            "TestPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRBoundary.GetGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector3> (GlobalNamespace::OVRBoundary::*)(GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType)>(&GlobalNamespace::OVRBoundary::GetGeometry)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x25a5940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            "GetGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRBoundary.GetDimensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::OVRBoundary::*)(GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType)>(&GlobalNamespace::OVRBoundary::GetDimensions)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x25a990c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            "GetDimensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRBoundary.GetVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRBoundary::*)()>(&GlobalNamespace::OVRBoundary::GetVisible)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x25a99e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            "GetVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRBoundary.SetVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBoundary::*)(bool)>(&GlobalNamespace::OVRBoundary::SetVisible)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25a9a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            "SetVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRBoundary._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBoundary::*)()>(&GlobalNamespace::OVRBoundary::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25a9b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::OVRBoundary::__set_cachedVector3fSize(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "cachedVector3fSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::OVRBoundary::__get_cachedVector3fSize()  {
return ::cordl_internals::getStaticField<int32_t, "cachedVector3fSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get>();
}
 void GlobalNamespace::OVRBoundary::__set_cachedGeometryNativeBuffer(GlobalNamespace::OVRNativeBuffer value)  {
::cordl_internals::setStaticField<GlobalNamespace::OVRNativeBuffer, "cachedGeometryNativeBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get>(std::forward<GlobalNamespace::OVRNativeBuffer>(value));
}
 GlobalNamespace::OVRNativeBuffer GlobalNamespace::OVRBoundary::__get_cachedGeometryNativeBuffer()  {
return ::cordl_internals::getStaticField<GlobalNamespace::OVRNativeBuffer, "cachedGeometryNativeBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get>();
}
 void GlobalNamespace::OVRBoundary::__set_cachedGeometryManagedBuffer(::ArrayW<float_t> value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "cachedGeometryManagedBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get>(std::forward<::ArrayW<float_t>>(value));
}
 ::ArrayW<float_t> GlobalNamespace::OVRBoundary::__get_cachedGeometryManagedBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "cachedGeometryManagedBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get>();
}
constexpr void GlobalNamespace::OVRBoundary::__set_cachedGeometryList(System::Collections::Generic::List_1<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Vector3>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> GlobalNamespace::OVRBoundary::__get_cachedGeometryList() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::OVRBoundary::GetConfigured()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            "GetConfigured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult GlobalNamespace::OVRBoundary::TestNode(GlobalNamespace::GlobalNamespace__OVRBoundary__Node node, GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType boundaryType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            "TestNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRBoundary__Node>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult, false>(const_cast<void*>(instance), ___internal_method, node, boundaryType);
}
 GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult GlobalNamespace::OVRBoundary::TestPoint(UnityEngine::Vector3 point, GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType boundaryType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            "TestPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryTestResult, false>(const_cast<void*>(instance), ___internal_method, point, boundaryType);
}
 ::ArrayW<UnityEngine::Vector3> GlobalNamespace::OVRBoundary::GetGeometry(GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType boundaryType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            "GetGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Vector3>, false>(const_cast<void*>(instance), ___internal_method, boundaryType);
}
 UnityEngine::Vector3 GlobalNamespace::OVRBoundary::GetDimensions(GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType boundaryType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            "GetDimensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRBoundary__BoundaryType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, boundaryType);
}
 bool GlobalNamespace::OVRBoundary::GetVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            "GetVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRBoundary::SetVisible(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            "SetVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::OVRBoundary GlobalNamespace::OVRBoundary::New_ctor()  {
GlobalNamespace::OVRBoundary o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::OVRBoundary>())};
return o;
}
 void GlobalNamespace::OVRBoundary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRBoundary>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
