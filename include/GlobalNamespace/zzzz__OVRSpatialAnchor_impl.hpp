#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceUser_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceQuery_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
// Ctor Parameters [CppParam { name: "Anchor", ty: "GlobalNamespace::OVRSpatialAnchor", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Delegate", ty: "System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair(GlobalNamespace::OVRSpatialAnchor Anchor, System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> Delegate) noexcept : ::bs_hook::ValueTypeWrapper() {this->Anchor = Anchor;
this->Delegate = Delegate;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair::__set_Anchor(GlobalNamespace::OVRSpatialAnchor value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRSpatialAnchor, 0x0>(this->__instance, std::forward<GlobalNamespace::OVRSpatialAnchor>(value));
}
constexpr GlobalNamespace::OVRSpatialAnchor GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair::__get_Anchor() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRSpatialAnchor, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair::__set_Delegate(System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>, 0x8>(this->__instance, std::forward<System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>>(value));
}
constexpr System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair::__get_Delegate() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>, 0x8>(this->__instance);
}
// Ctor Parameters [CppParam { name: "Anchors", ty: "System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Delegate", ty: "System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair(System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor> Anchors, System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> Delegate) noexcept : ::bs_hook::ValueTypeWrapper() {this->Anchors = Anchors;
this->Delegate = Delegate;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair::__set_Anchors(System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>, 0x0>(this->__instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor> GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair::__get_Anchors() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair::__set_Delegate(System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> value)  {
::cordl_internals::setInstanceField<System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>, 0x8>(this->__instance, std::forward<System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>(value));
}
constexpr System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair::__get_Delegate() const {
return ::cordl_internals::getInstanceField<System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>, 0x8>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions.get_StorageLocation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::get_StorageLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2611cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "get_StorageLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions.set_StorageLocation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::*)(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation)>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::set_StorageLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2611cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "set_StorageLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions.get_MaxAnchorCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::get_MaxAnchorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2611cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "get_MaxAnchorCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions.set_MaxAnchorCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::set_MaxAnchorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2611cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "set_MaxAnchorCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions.get_Timeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2611cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "get_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions.set_Timeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::*)(double_t)>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::set_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2611ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "set_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions.get_Uuids
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<System::Guid> (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::get_Uuids)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2611ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "get_Uuids",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions.set_Uuids
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::*)(System::Collections::Generic::IReadOnlyList_1<System::Guid>)>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::set_Uuids)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2611cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "set_Uuids",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<System::Guid>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions.ToQueryOptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::ToQueryOptions)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x26111dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "ToQueryOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_StorageLocation_k__BackingField", ty: "GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation", modifiers: "", def_value: Some("{}") }, CppParam { name: "_MaxAnchorCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_uuids", ty: "System::Collections::Generic::IReadOnlyList_1<System::Guid>", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::GlobalNamespace__OVRSpatialAnchor__LoadOptions(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation _StorageLocation_k__BackingField, int32_t _MaxAnchorCount_k__BackingField, double_t _Timeout_k__BackingField, System::Collections::Generic::IReadOnlyList_1<System::Guid> _uuids) noexcept : ::bs_hook::ValueTypeWrapper() {this->_StorageLocation_k__BackingField = _StorageLocation_k__BackingField;
this->_MaxAnchorCount_k__BackingField = _MaxAnchorCount_k__BackingField;
this->_Timeout_k__BackingField = _Timeout_k__BackingField;
this->_uuids = _uuids;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::__set__StorageLocation_k__BackingField(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation, 0x0>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::__get__StorageLocation_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::__set__MaxAnchorCount_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::__get__MaxAnchorCount_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::__set__Timeout_k__BackingField(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x8>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::__get__Timeout_k__BackingField() const {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::__set__uuids(System::Collections::Generic::IReadOnlyList_1<System::Guid> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IReadOnlyList_1<System::Guid>, 0x10>(this->__instance, std::forward<System::Collections::Generic::IReadOnlyList_1<System::Guid>>(value));
}
constexpr System::Collections::Generic::IReadOnlyList_1<System::Guid> GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::__get__uuids() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IReadOnlyList_1<System::Guid>, 0x10>(this->__instance);
}
 GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::get_StorageLocation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "get_StorageLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::set_StorageLocation(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "set_StorageLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::get_MaxAnchorCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "get_MaxAnchorCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::set_MaxAnchorCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "set_MaxAnchorCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 double_t GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::get_Timeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "get_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::set_Timeout(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "set_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 System::Collections::Generic::IReadOnlyList_1<System::Guid> GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::get_Uuids()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "get_Uuids",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<System::Guid>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::set_Uuids(System::Collections::Generic::IReadOnlyList_1<System::Guid> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "set_Uuids",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<System::Guid>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions::ToQueryOptions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(),
                            "ToQueryOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRSpaceQuery__Options, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor.get_Uuid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Guid (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::get_Uuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2611e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>::get(),
                            "get_Uuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor.get_Localized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::get_Localized)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2611e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>::get(),
                            "get_Localized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor.get_Localizing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::get_Localizing)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2611f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>::get(),
                            "get_Localizing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor.get_Pose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Pose (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::get_Pose)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2611f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>::get(),
                            "get_Pose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor.Localize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::*)(System::Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool>, double_t)>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::Localize)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x26120c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>::get(),
                            "Localize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor.BindTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::*)(GlobalNamespace::OVRSpatialAnchor)>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::BindTo)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x2612380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>::get(),
                            "BindTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpatialAnchor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::*)(GlobalNamespace::OVRSpace, System::Guid)>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2611a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_space", ty: "GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Uuid_k__BackingField", ty: "System::Guid", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor(GlobalNamespace::OVRSpace _space, System::Guid _Uuid_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->_space = _space;
this->_Uuid_k__BackingField = _Uuid_k__BackingField;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::__set__space(GlobalNamespace::OVRSpace value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRSpace, 0x0>(this->__instance, std::forward<GlobalNamespace::OVRSpace>(value));
}
constexpr GlobalNamespace::OVRSpace GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::__get__space() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRSpace, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::__set__Uuid_k__BackingField(System::Guid value)  {
::cordl_internals::setInstanceField<System::Guid, 0x8>(this->__instance, std::forward<System::Guid>(value));
}
constexpr System::Guid GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::__get__Uuid_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Guid, 0x8>(this->__instance);
}
 System::Guid GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::get_Uuid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>::get(),
                            "get_Uuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Guid, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::get_Localized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>::get(),
                            "get_Localized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::get_Localizing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>::get(),
                            "get_Localizing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::Pose GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::get_Pose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>::get(),
                            "get_Pose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Pose, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @param onComplete: System::Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool> (default: csnull)
/// @param timeout: double_t (default: 0)
 void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::Localize(System::Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool> onComplete, double_t timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>::get(),
                            "Localize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, onComplete, timeout);
}
 void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::BindTo(GlobalNamespace::OVRSpatialAnchor spatialAnchor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>::get(),
                            "BindTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpatialAnchor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, spatialAnchor);
}
 void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor::_ctor(GlobalNamespace::OVRSpace space, System::Guid uuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, space, uuid);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType  GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType::Save{0};
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType  GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType::Share{1};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26126c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development.LogWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development::LogWarning)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x261274c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development.LogError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development::LogError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26127d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development.LogRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::StringW)>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development::LogRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2612864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development>::get(),
                            "LogRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development.LogRequestResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool, ::StringW, ::StringW)>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development::LogRequestResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2612868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development>::get(),
                            "LogRequestResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development::Log(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
 void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development::LogWarning(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
 void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development::LogError(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
 void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development::LogRequest(uint64_t requestId, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development>::get(),
                            "LogRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, message);
}
 void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development::LogRequestResult(uint64_t requestId, bool result, ::StringW successMessage, ::StringW failureMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__Development>::get(),
                            "LogRequestResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result, successMessage, failureMessage);
}
// Ctor Parameters [CppParam { name: "Storage", ty: "GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions::GlobalNamespace__OVRSpatialAnchor__SaveOptions(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation Storage) noexcept : ::bs_hook::ValueTypeWrapper() {this->Storage = Storage;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions::__set_Storage(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation, 0x0>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions::__get_Storage() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation, 0x0>(this->__instance);
}
// Ctor Parameters [CppParam { name: "Storage", ty: "GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions::GlobalNamespace__OVRSpatialAnchor__EraseOptions(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation Storage) noexcept : ::bs_hook::ValueTypeWrapper() {this->Storage = Storage;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions::__set_Storage(GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation, 0x0>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions::__get_Storage() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation, 0x0>(this->__instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult::GlobalNamespace__OVRSpatialAnchor__OperationResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult  GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult::Success{0};
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult  GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult::Failure{-1000};
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult  GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult::Failure_SpaceCloudStorageDisabled{-2000};
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult  GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult::Failure_SpaceMappingInsufficient{-2001};
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult  GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult::Failure_SpaceLocalizationFailed{-2002};
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult  GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult::Failure_SpaceNetworkTimeout{-2003};
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult  GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult::Failure_SpaceNetworkRequestFailed{-2004};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c::*)()>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26128d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c._GetListToStoreTheShareRequest_b__34_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c::*)(GlobalNamespace::OVRSpaceUser, GlobalNamespace::OVRSpaceUser)>(&GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c::_GetListToStoreTheShareRequest_b__34_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26128d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c>::get(),
                            "<GetListToStoreTheShareRequest>b__34_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c::__set___9(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c>(value));
}
 GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c::__set___9__34_0(System::Comparison_1<GlobalNamespace::OVRSpaceUser> value)  {
::cordl_internals::setStaticField<System::Comparison_1<GlobalNamespace::OVRSpaceUser>, "<>9__34_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c>::get>(std::forward<System::Comparison_1<GlobalNamespace::OVRSpaceUser>>(value));
}
 System::Comparison_1<GlobalNamespace::OVRSpaceUser> GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c::__get___9__34_0()  {
return ::cordl_internals::getStaticField<System::Comparison_1<GlobalNamespace::OVRSpaceUser>, "<>9__34_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c>::get>();
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c::GlobalNamespace__OVRSpatialAnchor____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVRSpatialAnchor____c>())) {}
 void GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c::_GetListToStoreTheShareRequest_b__34_0(GlobalNamespace::OVRSpaceUser x, GlobalNamespace::OVRSpaceUser y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor____c>::get(),
                            "<GetListToStoreTheShareRequest>b__34_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x, y);
}
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.add_OnLocalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>)>(&GlobalNamespace::OVRSpatialAnchor::add_OnLocalize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x260ce50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "add_OnLocalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.remove_OnLocalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>)>(&GlobalNamespace::OVRSpatialAnchor::remove_OnLocalize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x260cf00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "remove_OnLocalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.get_Space
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRSpace (GlobalNamespace::OVRSpatialAnchor::*)()>(&GlobalNamespace::OVRSpatialAnchor::get_Space)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260cfb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "get_Space",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.set_Space
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(GlobalNamespace::OVRSpace)>(&GlobalNamespace::OVRSpatialAnchor::set_Space)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260cfb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "set_Space",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.get_Uuid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Guid (GlobalNamespace::OVRSpatialAnchor::*)()>(&GlobalNamespace::OVRSpatialAnchor::get_Uuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x260cfc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "get_Uuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.set_Uuid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(System::Guid)>(&GlobalNamespace::OVRSpatialAnchor::set_Uuid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x260cfcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "set_Uuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.get_Created
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSpatialAnchor::*)()>(&GlobalNamespace::OVRSpatialAnchor::get_Created)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x260cfd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "get_Created",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.get_PendingCreation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSpatialAnchor::*)()>(&GlobalNamespace::OVRSpatialAnchor::get_PendingCreation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x260cfe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "get_PendingCreation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.get_Localized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSpatialAnchor::*)()>(&GlobalNamespace::OVRSpatialAnchor::get_Localized)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x260cff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "get_Localized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.InitializeFromExisting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(GlobalNamespace::OVRSpace, System::Guid)>(&GlobalNamespace::OVRSpatialAnchor::InitializeFromExisting)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x260d084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "InitializeFromExisting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.Save
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>)>(&GlobalNamespace::OVRSpatialAnchor::Save)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x260d4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.ToNativeArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::Collections::NativeArray_1<uint64_t> (*)(System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>)>(&GlobalNamespace::OVRSpatialAnchor::ToNativeArray)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x260d638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "ToNativeArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.Save
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions, System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>)>(&GlobalNamespace::OVRSpatialAnchor::Save)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x260d508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.Save
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions, System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>)>(&GlobalNamespace::OVRSpatialAnchor::Save)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x260dba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.CopyAnchorListIntoListFromPool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor> (*)(System::Collections::Generic::IEnumerable_1<GlobalNamespace::OVRSpatialAnchor>)>(&GlobalNamespace::OVRSpatialAnchor::CopyAnchorListIntoListFromPool)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x260ddf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "CopyAnchorListIntoListFromPool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<GlobalNamespace::OVRSpatialAnchor>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.Share
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(GlobalNamespace::OVRSpaceUser, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>)>(&GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x260de9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Share",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.Share
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(GlobalNamespace::OVRSpaceUser, GlobalNamespace::OVRSpaceUser, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>)>(&GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x260e080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Share",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.Share
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(GlobalNamespace::OVRSpaceUser, GlobalNamespace::OVRSpaceUser, GlobalNamespace::OVRSpaceUser, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>)>(&GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x260e1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Share",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.Share
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(GlobalNamespace::OVRSpaceUser, GlobalNamespace::OVRSpaceUser, GlobalNamespace::OVRSpaceUser, GlobalNamespace::OVRSpaceUser, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>)>(&GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x260e35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Share",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.Share
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpaceUser>, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>)>(&GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x260e55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Share",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpaceUser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.Share
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>, System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpaceUser>, System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>)>(&GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x260e8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Share",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpaceUser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.ShareInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser>, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>)>(&GlobalNamespace::OVRSpatialAnchor::ShareInternal)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x260df78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "ShareInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.GetListToStoreTheShareRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor> (GlobalNamespace::OVRSpatialAnchor::*)(System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser>)>(&GlobalNamespace::OVRSpatialAnchor::GetListToStoreTheShareRequest)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x260ef28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "GetListToStoreTheShareRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.AreSortedUserListsEqual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::OVRSpaceUser>, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::OVRSpaceUser>)>(&GlobalNamespace::OVRSpatialAnchor::AreSortedUserListsEqual)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x260f2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "AreSortedUserListsEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::OVRSpaceUser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::OVRSpaceUser>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.Erase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>)>(&GlobalNamespace::OVRSpatialAnchor::Erase)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x260f5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Erase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.Erase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions, System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>)>(&GlobalNamespace::OVRSpatialAnchor::Erase)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x260f5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Erase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.ThrowIfBound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Guid)>(&GlobalNamespace::OVRSpatialAnchor::ThrowIfBound)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x260d290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "ThrowIfBound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.InitializeUnchecked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)(GlobalNamespace::OVRSpace, System::Guid)>(&GlobalNamespace::OVRSpatialAnchor::InitializeUnchecked)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x260d3c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "InitializeUnchecked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)()>(&GlobalNamespace::OVRSpatialAnchor::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x260f778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)()>(&GlobalNamespace::OVRSpatialAnchor::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x260f8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)()>(&GlobalNamespace::OVRSpatialAnchor::LateUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x260f90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.SaveBatchAnchors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRSpatialAnchor::SaveBatchAnchors)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x260f95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "SaveBatchAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.ShareBatchAnchors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRSpatialAnchor::ShareBatchAnchors)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x260fb48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "ShareBatchAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)()>(&GlobalNamespace::OVRSpatialAnchor::OnDestroy)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x260fdb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.GetTrackingSpacePose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPose (GlobalNamespace::OVRSpatialAnchor::*)()>(&GlobalNamespace::OVRSpatialAnchor::GetTrackingSpacePose)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x260fe6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "GetTrackingSpacePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.CreateSpatialAnchor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)()>(&GlobalNamespace::OVRSpatialAnchor::CreateSpatialAnchor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x260f790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "CreateSpatialAnchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.TryGetPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::OVRSpace, ByRef<GlobalNamespace::OVRPose>)>(&GlobalNamespace::OVRSpatialAnchor::TryGetPose)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x260ff34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "TryGetPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::OVRPose>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.UpdateTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)()>(&GlobalNamespace::OVRSpatialAnchor::UpdateTransform)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x260f6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "UpdateTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.InitializeOnLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRSpatialAnchor::InitializeOnLoad)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x26100c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "InitializeOnLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.InvokeSingleAnchorDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool)>(&GlobalNamespace::OVRSpatialAnchor::InvokeSingleAnchorDelegate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x26108e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "InvokeSingleAnchorDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.InvokeMultiAnchorDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType)>(&GlobalNamespace::OVRSpatialAnchor::InvokeMultiAnchorDelegate)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x26109a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "InvokeMultiAnchorDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.OnSpatialAnchorCreateComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool, GlobalNamespace::OVRSpace, System::Guid)>(&GlobalNamespace::OVRSpatialAnchor::OnSpatialAnchorCreateComplete)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2610e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnSpatialAnchorCreateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.OnSpaceSaveComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, GlobalNamespace::OVRSpace, bool, System::Guid)>(&GlobalNamespace::OVRSpatialAnchor::OnSpaceSaveComplete)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2610fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnSpaceSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.OnSpaceEraseComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool, System::Guid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation)>(&GlobalNamespace::OVRSpatialAnchor::OnSpaceEraseComplete)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2611020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnSpaceEraseComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.LoadUnboundAnchors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions, System::Action_1<::ArrayW<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>>)>(&GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchors)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2611084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "LoadUnboundAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::ArrayW<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.OnSpaceQueryComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool)>(&GlobalNamespace::OVRSpatialAnchor::OnSpaceQueryComplete)> {
  constexpr static std::size_t size = 0x778;
  constexpr static std::size_t addrs = 0x26112ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnSpaceQueryComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.OnSpaceSetComponentStatusComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool, GlobalNamespace::OVRSpace, System::Guid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType, bool)>(&GlobalNamespace::OVRSpatialAnchor::OnSpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2611a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnSpaceSetComponentStatusComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.OnSpaceListSaveComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult)>(&GlobalNamespace::OVRSpatialAnchor::OnSpaceListSaveComplete)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2611bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnSpaceListSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor.OnShareSpacesComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult)>(&GlobalNamespace::OVRSpatialAnchor::OnShareSpacesComplete)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2611c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnShareSpacesComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRSpatialAnchor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSpatialAnchor::*)()>(&GlobalNamespace::OVRSpatialAnchor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2611cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRSpatialAnchor::__set__startCalled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRSpatialAnchor::__get__startCalled() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__set__requestId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::OVRSpatialAnchor::__get__requestId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__set__defaultSaveOptions(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions GlobalNamespace::OVRSpatialAnchor::__get__defaultSaveOptions() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__set__defaultEraseOptions(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions GlobalNamespace::OVRSpatialAnchor::__get__defaultEraseOptions() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__set_OnLocalize(System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>(value));
}
constexpr System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> GlobalNamespace::OVRSpatialAnchor::__get_OnLocalize() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__set__Space_k__BackingField(GlobalNamespace::OVRSpace value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRSpace, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRSpace>(value));
}
constexpr GlobalNamespace::OVRSpace GlobalNamespace::OVRSpatialAnchor::__get__Space_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRSpace, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__set__Uuid_k__BackingField(System::Guid value)  {
::cordl_internals::setInstanceField<System::Guid, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Guid>(value));
}
constexpr System::Guid GlobalNamespace::OVRSpatialAnchor::__get__Uuid_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Guid, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OVRSpatialAnchor::__set_SpatialAnchors(System::Collections::Generic::Dictionary_2<System::Guid,GlobalNamespace::OVRSpatialAnchor> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<System::Guid,GlobalNamespace::OVRSpatialAnchor>, "SpatialAnchors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>(std::forward<System::Collections::Generic::Dictionary_2<System::Guid,GlobalNamespace::OVRSpatialAnchor>>(value));
}
 System::Collections::Generic::Dictionary_2<System::Guid,GlobalNamespace::OVRSpatialAnchor> GlobalNamespace::OVRSpatialAnchor::__get_SpatialAnchors()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<System::Guid,GlobalNamespace::OVRSpatialAnchor>, "SpatialAnchors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>();
}
 void GlobalNamespace::OVRSpatialAnchor::__set_CreationRequests(System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::OVRSpatialAnchor> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::OVRSpatialAnchor>, "CreationRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>(std::forward<System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::OVRSpatialAnchor>>(value));
}
 System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::OVRSpatialAnchor> GlobalNamespace::OVRSpatialAnchor::__get_CreationRequests()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::OVRSpatialAnchor>, "CreationRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>();
}
 void GlobalNamespace::OVRSpatialAnchor::__set_SaveRequests(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>>, "SaveRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>(std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>>>(value));
}
 System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>> GlobalNamespace::OVRSpatialAnchor::__get_SaveRequests()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__OVRSpace__StorageLocation,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>>, "SaveRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>();
}
 void GlobalNamespace::OVRSpatialAnchor::__set_SaveRequestCallbacks(System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>>, "SaveRequestCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>(std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>>>(value));
}
 System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>> GlobalNamespace::OVRSpatialAnchor::__get_SaveRequestCallbacks()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>>, "SaveRequestCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>();
}
 void GlobalNamespace::OVRSpatialAnchor::__set_ShareRequests(System::Collections::Generic::List_1<System::ValueTuple_2<System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser>,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>>> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<System::ValueTuple_2<System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser>,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>>>, "ShareRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>(std::forward<System::Collections::Generic::List_1<System::ValueTuple_2<System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser>,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>>>>(value));
}
 System::Collections::Generic::List_1<System::ValueTuple_2<System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser>,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>>> GlobalNamespace::OVRSpatialAnchor::__get_ShareRequests()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<System::ValueTuple_2<System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser>,System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>>>, "ShareRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>();
}
 void GlobalNamespace::OVRSpatialAnchor::__set_ShareRequestCallbacks(System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>, "ShareRequestCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>(std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>>(value));
}
 System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>> GlobalNamespace::OVRSpatialAnchor::__get_ShareRequestCallbacks()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRSpatialAnchor,System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>, "ShareRequestCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>();
}
 void GlobalNamespace::OVRSpatialAnchor::__set_SingleAnchorCompletionDelegates(System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>, "SingleAnchorCompletionDelegates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>(std::forward<System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>>(value));
}
 System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair> GlobalNamespace::OVRSpatialAnchor::__get_SingleAnchorCompletionDelegates()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SingleAnchorDelegatePair>, "SingleAnchorCompletionDelegates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>();
}
 void GlobalNamespace::OVRSpatialAnchor::__set_MultiAnchorCompletionDelegates(System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>, "MultiAnchorCompletionDelegates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>(std::forward<System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>>(value));
}
 System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair> GlobalNamespace::OVRSpatialAnchor::__get_MultiAnchorCompletionDelegates()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorDelegatePair>, "MultiAnchorCompletionDelegates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>();
}
 void GlobalNamespace::OVRSpatialAnchor::__set_LocalizationDelegates(System::Collections::Generic::Dictionary_2<uint64_t,System::Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool>> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<uint64_t,System::Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool>>, "LocalizationDelegates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>(std::forward<System::Collections::Generic::Dictionary_2<uint64_t,System::Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool>>>(value));
}
 System::Collections::Generic::Dictionary_2<uint64_t,System::Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool>> GlobalNamespace::OVRSpatialAnchor::__get_LocalizationDelegates()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<uint64_t,System::Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool>>, "LocalizationDelegates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>();
}
 void GlobalNamespace::OVRSpatialAnchor::__set_Queries(System::Collections::Generic::Dictionary_2<uint64_t,System::Action_1<::ArrayW<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>>> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<uint64_t,System::Action_1<::ArrayW<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>>>, "Queries", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>(std::forward<System::Collections::Generic::Dictionary_2<uint64_t,System::Action_1<::ArrayW<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>>>>(value));
}
 System::Collections::Generic::Dictionary_2<uint64_t,System::Action_1<::ArrayW<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>>> GlobalNamespace::OVRSpatialAnchor::__get_Queries()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<uint64_t,System::Action_1<::ArrayW<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>>>, "Queries", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>();
}
 void GlobalNamespace::OVRSpatialAnchor::__set_UnboundAnchorBuffer(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>, "UnboundAnchorBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>(std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>>(value));
}
 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor> GlobalNamespace::OVRSpatialAnchor::__get_UnboundAnchorBuffer()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>, "UnboundAnchorBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>();
}
 void GlobalNamespace::OVRSpatialAnchor::__set_ComponentTypeBuffer(::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType> value)  {
::cordl_internals::setStaticField<::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType>, "ComponentTypeBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>(std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType>>(value));
}
 ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType> GlobalNamespace::OVRSpatialAnchor::__get_ComponentTypeBuffer()  {
return ::cordl_internals::getStaticField<::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType>, "ComponentTypeBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get>();
}
 void GlobalNamespace::OVRSpatialAnchor::add_OnLocalize(System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "add_OnLocalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::OVRSpatialAnchor::remove_OnLocalize(System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "remove_OnLocalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::OVRSpace GlobalNamespace::OVRSpatialAnchor::get_Space()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "get_Space",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::OVRSpace, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRSpatialAnchor::set_Space(GlobalNamespace::OVRSpace value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "set_Space",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Guid GlobalNamespace::OVRSpatialAnchor::get_Uuid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "get_Uuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Guid, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRSpatialAnchor::set_Uuid(System::Guid value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "set_Uuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::OVRSpatialAnchor::get_Created()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "get_Created",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVRSpatialAnchor::get_PendingCreation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "get_PendingCreation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVRSpatialAnchor::get_Localized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "get_Localized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRSpatialAnchor::InitializeFromExisting(GlobalNamespace::OVRSpace space, System::Guid uuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "InitializeFromExisting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, space, uuid);
}
/// @param onComplete: System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> (default: csnull)
 void GlobalNamespace::OVRSpatialAnchor::Save(System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onComplete);
}
 Unity::Collections::NativeArray_1<uint64_t> GlobalNamespace::OVRSpatialAnchor::ToNativeArray(System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor> anchors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "ToNativeArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Unity::Collections::NativeArray_1<uint64_t>, false>(nullptr, ___internal_method, anchors);
}
/// @param onComplete: System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> (default: csnull)
 void GlobalNamespace::OVRSpatialAnchor::Save(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions saveOptions, System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saveOptions, onComplete);
}
/// @param onComplete: System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> (default: csnull)
 void GlobalNamespace::OVRSpatialAnchor::Save(System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor> anchors, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions saveOptions, System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__SaveOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, anchors, saveOptions, onComplete);
}
 System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor> GlobalNamespace::OVRSpatialAnchor::CopyAnchorListIntoListFromPool(System::Collections::Generic::IEnumerable_1<GlobalNamespace::OVRSpatialAnchor> anchorList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "CopyAnchorListIntoListFromPool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<GlobalNamespace::OVRSpatialAnchor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>, false>(nullptr, ___internal_method, anchorList);
}
/// @param onComplete: System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> (default: csnull)
 void GlobalNamespace::OVRSpatialAnchor::Share(GlobalNamespace::OVRSpaceUser user, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Share",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, user, onComplete);
}
/// @param onComplete: System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> (default: csnull)
 void GlobalNamespace::OVRSpatialAnchor::Share(GlobalNamespace::OVRSpaceUser user1, GlobalNamespace::OVRSpaceUser user2, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Share",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, user1, user2, onComplete);
}
/// @param onComplete: System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> (default: csnull)
 void GlobalNamespace::OVRSpatialAnchor::Share(GlobalNamespace::OVRSpaceUser user1, GlobalNamespace::OVRSpaceUser user2, GlobalNamespace::OVRSpaceUser user3, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Share",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, user1, user2, user3, onComplete);
}
/// @param onComplete: System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> (default: csnull)
 void GlobalNamespace::OVRSpatialAnchor::Share(GlobalNamespace::OVRSpaceUser user1, GlobalNamespace::OVRSpaceUser user2, GlobalNamespace::OVRSpaceUser user3, GlobalNamespace::OVRSpaceUser user4, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Share",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, user1, user2, user3, user4, onComplete);
}
/// @param onComplete: System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> (default: csnull)
 void GlobalNamespace::OVRSpatialAnchor::Share(System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpaceUser> users, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Share",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpaceUser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, users, onComplete);
}
/// @param onComplete: System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> (default: csnull)
 void GlobalNamespace::OVRSpatialAnchor::Share(System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor> anchors, System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpaceUser> users, System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Share",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpaceUser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<System::Collections::Generic::ICollection_1<GlobalNamespace::OVRSpatialAnchor>,GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, anchors, users, onComplete);
}
/// @param onComplete: System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> (default: csnull)
 void GlobalNamespace::OVRSpatialAnchor::ShareInternal(System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser> users, System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "ShareInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, users, onComplete);
}
 System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor> GlobalNamespace::OVRSpatialAnchor::GetListToStoreTheShareRequest(System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser> users)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "GetListToStoreTheShareRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<GlobalNamespace::OVRSpaceUser>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<GlobalNamespace::OVRSpatialAnchor>, false>(const_cast<void*>(instance), ___internal_method, users);
}
 bool GlobalNamespace::OVRSpatialAnchor::AreSortedUserListsEqual(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::OVRSpaceUser> sortedList1, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::OVRSpaceUser> sortedList2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "AreSortedUserListsEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::OVRSpaceUser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::OVRSpaceUser>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sortedList1, sortedList2);
}
/// @param onComplete: System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> (default: csnull)
 void GlobalNamespace::OVRSpatialAnchor::Erase(System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Erase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onComplete);
}
/// @param onComplete: System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> (default: csnull)
 void GlobalNamespace::OVRSpatialAnchor::Erase(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions eraseOptions, System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Erase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__EraseOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::OVRSpatialAnchor,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eraseOptions, onComplete);
}
 void GlobalNamespace::OVRSpatialAnchor::ThrowIfBound(System::Guid uuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "ThrowIfBound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, uuid);
}
 void GlobalNamespace::OVRSpatialAnchor::InitializeUnchecked(GlobalNamespace::OVRSpace space, System::Guid uuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "InitializeUnchecked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, space, uuid);
}
 void GlobalNamespace::OVRSpatialAnchor::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRSpatialAnchor::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRSpatialAnchor::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRSpatialAnchor::SaveBatchAnchors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "SaveBatchAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::OVRSpatialAnchor::ShareBatchAnchors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "ShareBatchAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::OVRSpatialAnchor::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::OVRPose GlobalNamespace::OVRSpatialAnchor::GetTrackingSpacePose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "GetTrackingSpacePose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::OVRPose, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRSpatialAnchor::CreateSpatialAnchor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "CreateSpatialAnchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVRSpatialAnchor::TryGetPose(GlobalNamespace::OVRSpace space, ByRef<GlobalNamespace::OVRPose> pose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "TryGetPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::OVRPose>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, space, pose);
}
 void GlobalNamespace::OVRSpatialAnchor::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "UpdateTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TKey,typename TValue>
 bool GlobalNamespace::OVRSpatialAnchor::TryExtractValue(System::Collections::Generic::Dictionary_2<TKey,TValue> dict, TKey key, ByRef<TValue> value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                        "TryExtractValue",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<TKey,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dict, key, value);
}
 void GlobalNamespace::OVRSpatialAnchor::InitializeOnLoad()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "InitializeOnLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::OVRSpatialAnchor::InvokeSingleAnchorDelegate(uint64_t requestId, bool result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "InvokeSingleAnchorDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result);
}
 void GlobalNamespace::OVRSpatialAnchor::InvokeMultiAnchorDelegate(uint64_t requestId, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult result, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType actionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "InvokeMultiAnchorDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__MultiAnchorActionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result, actionType);
}
 void GlobalNamespace::OVRSpatialAnchor::OnSpatialAnchorCreateComplete(uint64_t requestId, bool success, GlobalNamespace::OVRSpace space, System::Guid uuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnSpatialAnchorCreateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, success, space, uuid);
}
 void GlobalNamespace::OVRSpatialAnchor::OnSpaceSaveComplete(uint64_t requestId, GlobalNamespace::OVRSpace space, bool result, System::Guid uuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnSpaceSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, space, result, uuid);
}
 void GlobalNamespace::OVRSpatialAnchor::OnSpaceEraseComplete(uint64_t requestId, bool result, System::Guid uuid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation location)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnSpaceEraseComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result, uuid, location);
}
 bool GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchors(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions options, System::Action_1<::ArrayW<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>> onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "LoadUnboundAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__LoadOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::ArrayW<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, options, onComplete);
}
 void GlobalNamespace::OVRSpatialAnchor::OnSpaceQueryComplete(uint64_t requestId, bool queryResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnSpaceQueryComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, queryResult);
}
 void GlobalNamespace::OVRSpatialAnchor::OnSpaceSetComponentStatusComplete(uint64_t requestId, bool result, GlobalNamespace::OVRSpace space, System::Guid uuid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType componentType, bool enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnSpaceSetComponentStatusComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result, space, uuid, componentType, enabled);
}
 void GlobalNamespace::OVRSpatialAnchor::OnSpaceListSaveComplete(uint64_t requestId, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnSpaceListSaveComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result);
}
 void GlobalNamespace::OVRSpatialAnchor::OnShareSpacesComplete(uint64_t requestId, GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            "OnShareSpacesComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__OperationResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result);
}
// Ctor Parameters []
 GlobalNamespace::OVRSpatialAnchor::OVRSpatialAnchor()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<OVRSpatialAnchor>())) {}
 void GlobalNamespace::OVRSpatialAnchor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRSpatialAnchor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
