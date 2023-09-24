#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GenerateGeoCache_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoGroup_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GenerateGeoCache_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_UnityMaterialInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MeshData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutputData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MeshIndexFormat_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutput_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GeoInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MaterialData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType  GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::NONE{0};
constexpr GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType  GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::BOX{1};
constexpr GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType  GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::SPHERE{2};
constexpr GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType  GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::MESH{3};
constexpr GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType  GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::SIMPLE_BOX{4};
constexpr GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType  GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::SIMPLE_SPHERE{5};
constexpr GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType  GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::SIMPLE_CAPSULE{6};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20516c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__colliderType(GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType>(value));
}
constexpr GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__colliderCenter(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderCenter() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__colliderSize(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderSize() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__colliderRadius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__convexCollider(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__convexCollider() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__collisionGroupName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__collisionGroupName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__collisionVertices(::ArrayW<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Vector3>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<UnityEngine::Vector3> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__collisionVertices() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Vector3>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__collisionIndices(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__collisionIndices() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__meshTopology(UnityEngine::MeshTopology value)  {
::cordl_internals::setInstanceField<UnityEngine::MeshTopology, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::MeshTopology>(value));
}
constexpr UnityEngine::MeshTopology HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__meshTopology() const {
return ::cordl_internals::getInstanceField<UnityEngine::MeshTopology, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__isTrigger(bool value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__isTrigger() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::New_ctor()  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo>())};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2053d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c._GetFinalMaterialsFromComparingNewWithPrevious_b__63_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::*)(UnityEngine::Material)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::_GetFinalMaterialsFromComparingNewWithPrevious_b__63_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2053d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c>::get(),
                            "<GetFinalMaterialsFromComparingNewWithPrevious>b__63_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c._GenerateLODMeshesFromGeoGroups_b__65_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::*)(float_t, float_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::_GenerateLODMeshesFromGeoGroups_b__65_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2053da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c>::get(),
                            "<GenerateLODMeshesFromGeoGroups>b__65_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::__set___9(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c value)  {
::cordl_internals::setStaticField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c>::get>(std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c>(value));
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::__get___9()  {
return ::cordl_internals::getStaticField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c>::get>();
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::__set___9__63_0(System::Predicate_1<UnityEngine::Material> value)  {
::cordl_internals::setStaticField<System::Predicate_1<UnityEngine::Material>, "<>9__63_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c>::get>(std::forward<System::Predicate_1<UnityEngine::Material>>(value));
}
 System::Predicate_1<UnityEngine::Material> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::__get___9__63_0()  {
return ::cordl_internals::getStaticField<System::Predicate_1<UnityEngine::Material>, "<>9__63_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c>::get>();
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::__set___9__65_0(System::Comparison_1<float_t> value)  {
::cordl_internals::setStaticField<System::Comparison_1<float_t>, "<>9__65_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c>::get>(std::forward<System::Comparison_1<float_t>>(value));
}
 System::Comparison_1<float_t> HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::__get___9__65_0()  {
return ::cordl_internals::getStaticField<System::Comparison_1<float_t>, "<>9__65_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c>::get>();
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::New_ctor()  {
HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c>())};
return o;
}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::_GetFinalMaterialsFromComparingNewWithPrevious_b__63_0(UnityEngine::Material material)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c>::get(),
                            "<GetFinalMaterialsFromComparingNewWithPrevious>b__63_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, material);
}
 int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c::_GenerateLODMeshesFromGeoGroups_b__65_0(float_t a, float_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c>::get(),
                            "<GenerateLODMeshesFromGeoGroups>b__65_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, a, b);
}
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.get_GeoID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::HEU_GenerateGeoCache::*)()>(&HoudiniEngineUnity::HEU_GenerateGeoCache::get_GeoID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20488a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "get_GeoID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.get_PartID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::HEU_GenerateGeoCache::*)()>(&HoudiniEngineUnity::HEU_GenerateGeoCache::get_PartID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20488ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "get_PartID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.get_AssetID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::HEU_GenerateGeoCache::*)()>(&HoudiniEngineUnity::HEU_GenerateGeoCache::get_AssetID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20488b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "get_AssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.set_AssetID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_GenerateGeoCache::*)(int32_t)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::set_AssetID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20488bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "set_AssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.GetPopulatedGeoCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_GenerateGeoCache (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, int32_t, bool, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData>, ::StringW)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::GetPopulatedGeoCache)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x20488c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GetPopulatedGeoCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.PopulateUnityMaterialData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_GenerateGeoCache::*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::PopulateUnityMaterialData)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x2048dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "PopulateUnityMaterialData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.GetMaterialKeyFromAttributeIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(HoudiniEngineUnity::HEU_GenerateGeoCache, int32_t, ByRef<::StringW>, ByRef<::StringW>, ByRef<int32_t>)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::GetMaterialKeyFromAttributeIndex)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x204afd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GetMaterialKeyFromAttributeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.CreateMaterialInfoEntryFromAttributeIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_GenerateGeoCache, int32_t)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::CreateMaterialInfoEntryFromAttributeIndex)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x204aebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "CreateMaterialInfoEntryFromAttributeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.PopulateGeometryData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_GenerateGeoCache::*)(HoudiniEngineUnity::HEU_SessionBase, bool)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::PopulateGeometryData)> {
  constexpr static std::size_t size = 0x1ae4;
  constexpr static std::size_t addrs = 0x20493d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "PopulateGeometryData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.ParseLODTransitionAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ByRef<::ArrayW<float_t>>)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::ParseLODTransitionAttribute)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x204b134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "ParseLODTransitionAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.UpdateColliders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_GenerateGeoCache, HoudiniEngineUnity::HEU_GeneratedOutputData)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::UpdateColliders)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x204b2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "UpdateColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeneratedOutputData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.UpdateCollider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_GenerateGeoCache, HoudiniEngineUnity::HEU_GeneratedOutputData, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::UpdateCollider)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x204b440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "UpdateCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeneratedOutputData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.GetFinalMaterialsFromComparingNewWithPrevious
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, ::ArrayW<UnityEngine::Material>, ::ArrayW<UnityEngine::Material>, ByRef<::ArrayW<UnityEngine::Material>>)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::GetFinalMaterialsFromComparingNewWithPrevious)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x204ba84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GetFinalMaterialsFromComparingNewWithPrevious",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Material>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Material>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Material>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.GenerateMeshFromSingleGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_GeoGroup, HoudiniEngineUnity::HEU_GenerateGeoCache, HoudiniEngineUnity::HEU_GeneratedOutput, int32_t, bool, bool, bool, bool)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateMeshFromSingleGroup)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x204be28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GenerateMeshFromSingleGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeoGroup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeneratedOutput>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.GenerateLODMeshesFromGeoGroups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>, HoudiniEngineUnity::HEU_GenerateGeoCache, HoudiniEngineUnity::HEU_GeneratedOutput, int32_t, bool, bool, bool, bool)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateLODMeshesFromGeoGroups)> {
  constexpr static std::size_t size = 0xb64;
  constexpr static std::size_t addrs = 0x204cad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GenerateLODMeshesFromGeoGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeneratedOutput>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.GenerateMeshFromGeoGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_GeoGroup, HoudiniEngineUnity::HEU_GenerateGeoCache, int32_t, bool, bool, bool, bool, ByRef<UnityEngine::Mesh>, ByRef<::ArrayW<UnityEngine::Material>>)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateMeshFromGeoGroup)> {
  constexpr static std::size_t size = 0xaec;
  constexpr static std::size_t addrs = 0x204bfe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GenerateMeshFromGeoGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeoGroup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Mesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Material>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.CombineQuadMeshes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh (*)(System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MeshData>, System::Collections::Generic::List_1<int32_t>, bool)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::CombineQuadMeshes)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x204dda8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "CombineQuadMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MeshData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.CombineMeshes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh (*)(System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MeshData>, System::Collections::Generic::List_1<int32_t>, bool, bool, HoudiniEngineUnity::HEU_MeshIndexFormat)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::CombineMeshes)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x204e34c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "CombineMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MeshData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_MeshIndexFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.CreateMeshFromMeshData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh (*)(HoudiniEngineUnity::HEU_MeshData, bool, bool, HoudiniEngineUnity::HEU_MeshIndexFormat)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::CreateMeshFromMeshData)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x204db0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "CreateMeshFromMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_MeshData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_MeshIndexFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.TransferRegularAttributesToVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int32_t>, ::ArrayW<int32_t>, System::Collections::Generic::List_1<int32_t>, System::Collections::Generic::List_1<int32_t>, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>, ::ArrayW<float_t>, ByRef<::ArrayW<float_t>>)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::TransferRegularAttributesToVertices)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x204e6dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "TransferRegularAttributesToVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.GenerateGeoGroupUsingGeoCacheVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_GenerateGeoCache, bool, bool, bool, bool, bool, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>>, ByRef<int32_t>)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateGeoGroupUsingGeoCacheVertices)> {
  constexpr static std::size_t size = 0x2d00;
  constexpr static std::size_t addrs = 0x204e9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GenerateGeoGroupUsingGeoCacheVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.GenerateGeoGroupUsingGeoCachePoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, HoudiniEngineUnity::HEU_GenerateGeoCache, bool, bool, bool, bool, bool, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>>, ByRef<int32_t>)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateGeoGroupUsingGeoCachePoints)> {
  constexpr static std::size_t size = 0x226c;
  constexpr static std::size_t addrs = 0x2051a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GenerateGeoGroupUsingGeoCachePoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache.CalculateGroupMeshTopology
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::MeshTopology (*)(System::Collections::Generic::List_1<int32_t>, ::ArrayW<int32_t>)>(&HoudiniEngineUnity::HEU_GenerateGeoCache::CalculateGroupMeshTopology)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x20516d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "CalculateGroupMeshTopology",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GenerateGeoCache._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_GenerateGeoCache::*)()>(&HoudiniEngineUnity::HEU_GenerateGeoCache::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2048bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__AssetID_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_GenerateGeoCache::__get__AssetID_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__geoInfo(HoudiniEngineUnity::HAPI_GeoInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_GeoInfo, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_GeoInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_GeoInfo HoudiniEngineUnity::HEU_GenerateGeoCache::__get__geoInfo() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_GeoInfo, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__partInfo(HoudiniEngineUnity::HAPI_PartInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_PartInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_PartInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_PartInfo HoudiniEngineUnity::HEU_GenerateGeoCache::__get__partInfo() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_PartInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__partName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_GenerateGeoCache::__get__partName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__vertexList(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__vertexList() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__faceCounts(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__faceCounts() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__houdiniMaterialIDs(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__houdiniMaterialIDs() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__singleFaceUnityMaterial(bool value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_GenerateGeoCache::__get__singleFaceUnityMaterial() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__singleFaceHoudiniMaterial(bool value)  {
::cordl_internals::setInstanceField<bool, 0x89>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_GenerateGeoCache::__get__singleFaceHoudiniMaterial() const {
return ::cordl_internals::getInstanceField<bool, 0x89>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__unityMaterialInfos(System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_UnityMaterialInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_UnityMaterialInfo>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_UnityMaterialInfo>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_UnityMaterialInfo> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialInfos() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_UnityMaterialInfo>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__unityMaterialAttrInfo(HoudiniEngineUnity::HAPI_AttributeInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_AttributeInfo HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialAttrInfo() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__unityMaterialAttrName(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialAttrName() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__unityMaterialAttrStringsMap(System::Collections::Generic::Dictionary_2<int32_t,::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<int32_t,::StringW>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<int32_t,::StringW>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<int32_t,::StringW> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialAttrStringsMap() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<int32_t,::StringW>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__substanceMaterialAttrNameInfo(HoudiniEngineUnity::HAPI_AttributeInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_AttributeInfo HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrNameInfo() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__substanceMaterialAttrName(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrName() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__substanceMaterialAttrStringsMap(System::Collections::Generic::Dictionary_2<int32_t,::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<int32_t,::StringW>, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<int32_t,::StringW>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<int32_t,::StringW> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrStringsMap() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<int32_t,::StringW>, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__substanceMaterialAttrIndexInfo(HoudiniEngineUnity::HAPI_AttributeInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_AttributeInfo HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrIndexInfo() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__substanceMaterialAttrIndex(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrIndex() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__inUseMaterials(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__inUseMaterials() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__posAttrInfo(HoudiniEngineUnity::HAPI_AttributeInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_AttributeInfo HoudiniEngineUnity::HEU_GenerateGeoCache::__get__posAttrInfo() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__uvsAttrInfo(::ArrayW<HoudiniEngineUnity::HAPI_AttributeInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<HoudiniEngineUnity::HAPI_AttributeInfo>, 0x168>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<HoudiniEngineUnity::HAPI_AttributeInfo>>(value));
}
constexpr ::ArrayW<HoudiniEngineUnity::HAPI_AttributeInfo> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__uvsAttrInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<HoudiniEngineUnity::HAPI_AttributeInfo>, 0x168>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__normalAttrInfo(HoudiniEngineUnity::HAPI_AttributeInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x170>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_AttributeInfo HoudiniEngineUnity::HEU_GenerateGeoCache::__get__normalAttrInfo() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x170>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__colorAttrInfo(HoudiniEngineUnity::HAPI_AttributeInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x198>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_AttributeInfo HoudiniEngineUnity::HEU_GenerateGeoCache::__get__colorAttrInfo() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x198>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__alphaAttrInfo(HoudiniEngineUnity::HAPI_AttributeInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_AttributeInfo HoudiniEngineUnity::HEU_GenerateGeoCache::__get__alphaAttrInfo() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__tangentAttrInfo(HoudiniEngineUnity::HAPI_AttributeInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_AttributeInfo HoudiniEngineUnity::HEU_GenerateGeoCache::__get__tangentAttrInfo() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__posAttr(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x210>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__posAttr() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x210>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__uvsAttr(::ArrayW<::ArrayW<float_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<float_t>>, 0x218>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::ArrayW<float_t>>>(value));
}
constexpr ::ArrayW<::ArrayW<float_t>> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__uvsAttr() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<float_t>>, 0x218>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__normalAttr(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x220>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__normalAttr() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x220>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__colorAttr(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x228>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__colorAttr() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x228>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__alphaAttr(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x230>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__alphaAttr() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x230>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__tangentAttr(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x238>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__tangentAttr() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x238>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__groups(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x240>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groups() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x240>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__hasGroupGeometry(bool value)  {
::cordl_internals::setInstanceField<bool, 0x248>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_GenerateGeoCache::__get__hasGroupGeometry() const {
return ::cordl_internals::getInstanceField<bool, 0x248>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__groupSplitVertexIndices(System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>>, 0x250>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groupSplitVertexIndices() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>>, 0x250>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__groupSplitFaceIndices(System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>>, 0x258>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groupSplitFaceIndices() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>>, 0x258>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__groupVertexOffsets(System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>>, 0x260>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groupVertexOffsets() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>>, 0x260>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__allCollisionVertexList(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x268>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__allCollisionVertexList() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x268>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__allCollisionFaceIndices(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x270>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__allCollisionFaceIndices() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x270>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__normalCosineThreshold(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x278>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HEU_GenerateGeoCache::__get__normalCosineThreshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x278>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__hasLODGroups(bool value)  {
::cordl_internals::setInstanceField<bool, 0x27c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_GenerateGeoCache::__get__hasLODGroups() const {
return ::cordl_internals::getInstanceField<bool, 0x27c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__LODTransitionValues(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x280>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__LODTransitionValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x280>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__isMeshReadWrite(bool value)  {
::cordl_internals::setInstanceField<bool, 0x288>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_GenerateGeoCache::__get__isMeshReadWrite() const {
return ::cordl_internals::getInstanceField<bool, 0x288>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__colliderInfos(System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo>, 0x290>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__colliderInfos() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo>, 0x290>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__materialCache(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData>, 0x298>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__materialCache() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData>, 0x298>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__materialIDToDataMap(System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MaterialData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MaterialData>, 0x2a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MaterialData>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MaterialData> HoudiniEngineUnity::HEU_GenerateGeoCache::__get__materialIDToDataMap() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MaterialData>, 0x2a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__assetCacheFolderPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x2a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_GenerateGeoCache::__get__assetCacheFolderPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x2a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__meshIndexFormat(HoudiniEngineUnity::HEU_MeshIndexFormat value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HEU_MeshIndexFormat, 0x2b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HEU_MeshIndexFormat>(value));
}
constexpr HoudiniEngineUnity::HEU_MeshIndexFormat HoudiniEngineUnity::HEU_GenerateGeoCache::__get__meshIndexFormat() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HEU_MeshIndexFormat, 0x2b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t HoudiniEngineUnity::HEU_GenerateGeoCache::get_GeoID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "get_GeoID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t HoudiniEngineUnity::HEU_GenerateGeoCache::get_PartID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "get_PartID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t HoudiniEngineUnity::HEU_GenerateGeoCache::get_AssetID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "get_AssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_GenerateGeoCache::set_AssetID(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "set_AssetID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 HoudiniEngineUnity::HEU_GenerateGeoCache HoudiniEngineUnity::HEU_GenerateGeoCache::GetPopulatedGeoCache(HoudiniEngineUnity::HEU_SessionBase session, int32_t assetID, int32_t geoID, int32_t partID, bool bUseLODGroups, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> materialCache, ::StringW assetCacheFolderPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GetPopulatedGeoCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_GenerateGeoCache, false>(nullptr, ___internal_method, session, assetID, geoID, partID, bUseLODGroups, materialCache, assetCacheFolderPath);
}
 void HoudiniEngineUnity::HEU_GenerateGeoCache::PopulateUnityMaterialData(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "PopulateUnityMaterialData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session);
}
 int32_t HoudiniEngineUnity::HEU_GenerateGeoCache::GetMaterialKeyFromAttributeIndex(HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, int32_t attributeIndex, ByRef<::StringW> unityMaterialName, ByRef<::StringW> substanceName, ByRef<int32_t> substanceIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GetMaterialKeyFromAttributeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, geoCache, attributeIndex, unityMaterialName, substanceName, substanceIndex);
}
 void HoudiniEngineUnity::HEU_GenerateGeoCache::CreateMaterialInfoEntryFromAttributeIndex(HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, int32_t materialAttributeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "CreateMaterialInfoEntryFromAttributeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, geoCache, materialAttributeIndex);
}
 bool HoudiniEngineUnity::HEU_GenerateGeoCache::PopulateGeometryData(HoudiniEngineUnity::HEU_SessionBase session, bool bUseLODGroups)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "PopulateGeometryData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, bUseLODGroups);
}
 void HoudiniEngineUnity::HEU_GenerateGeoCache::ParseLODTransitionAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ByRef<::ArrayW<float_t>> LODTransitionValues)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "ParseLODTransitionAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, session, geoID, partID, LODTransitionValues);
}
 void HoudiniEngineUnity::HEU_GenerateGeoCache::UpdateColliders(HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, HoudiniEngineUnity::HEU_GeneratedOutputData outputData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "UpdateColliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeneratedOutputData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, geoCache, outputData);
}
 void HoudiniEngineUnity::HEU_GenerateGeoCache::UpdateCollider(HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, HoudiniEngineUnity::HEU_GeneratedOutputData outputData, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo colliderInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "UpdateCollider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeneratedOutputData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, geoCache, outputData, colliderInfo);
}
 void HoudiniEngineUnity::HEU_GenerateGeoCache::GetFinalMaterialsFromComparingNewWithPrevious(UnityEngine::GameObject gameObject, ::ArrayW<UnityEngine::Material> previousMaterials, ::ArrayW<UnityEngine::Material> newMaterials, ByRef<::ArrayW<UnityEngine::Material>> finalMaterials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GetFinalMaterialsFromComparingNewWithPrevious",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Material>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Material>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Material>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObject, previousMaterials, newMaterials, finalMaterials);
}
 bool HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateMeshFromSingleGroup(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_GeoGroup GeoGroup, HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, HoudiniEngineUnity::HEU_GeneratedOutput generatedOutput, int32_t defaultMaterialKey, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bPartInstanced)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GenerateMeshFromSingleGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeoGroup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeneratedOutput>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, GeoGroup, geoCache, generatedOutput, defaultMaterialKey, bGenerateUVs, bGenerateTangents, bGenerateNormals, bPartInstanced);
}
 bool HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateLODMeshesFromGeoGroups(HoudiniEngineUnity::HEU_SessionBase session, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup> GeoGroupMeshes, HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, HoudiniEngineUnity::HEU_GeneratedOutput generatedOutput, int32_t defaultMaterialKey, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bPartInstanced)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GenerateLODMeshesFromGeoGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeneratedOutput>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, GeoGroupMeshes, geoCache, generatedOutput, defaultMaterialKey, bGenerateUVs, bGenerateTangents, bGenerateNormals, bPartInstanced);
}
 bool HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateMeshFromGeoGroup(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_GeoGroup GeoGroup, HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, int32_t defaultMaterialKey, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bPartInstanced, ByRef<UnityEngine::Mesh> newMesh, ByRef<::ArrayW<UnityEngine::Material>> newMaterials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GenerateMeshFromGeoGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeoGroup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Mesh>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Material>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, GeoGroup, geoCache, defaultMaterialKey, bGenerateUVs, bGenerateTangents, bGenerateNormals, bPartInstanced, newMesh, newMaterials);
}
 UnityEngine::Mesh HoudiniEngineUnity::HEU_GenerateGeoCache::CombineQuadMeshes(System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MeshData> subMeshesMap, System::Collections::Generic::List_1<int32_t> subMeshIndices, bool bGenerateNormals)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "CombineQuadMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MeshData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Mesh, false>(nullptr, ___internal_method, subMeshesMap, subMeshIndices, bGenerateNormals);
}
 UnityEngine::Mesh HoudiniEngineUnity::HEU_GenerateGeoCache::CombineMeshes(System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MeshData> subMeshesMap, System::Collections::Generic::List_1<int32_t> submeshIndices, bool bGenerateUVs, bool bGenerateNormals, HoudiniEngineUnity::HEU_MeshIndexFormat meshIndexFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "CombineMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MeshData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_MeshIndexFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Mesh, false>(nullptr, ___internal_method, subMeshesMap, submeshIndices, bGenerateUVs, bGenerateNormals, meshIndexFormat);
}
 UnityEngine::Mesh HoudiniEngineUnity::HEU_GenerateGeoCache::CreateMeshFromMeshData(HoudiniEngineUnity::HEU_MeshData submesh, bool bGenerateUVs, bool bGenerateNormals, HoudiniEngineUnity::HEU_MeshIndexFormat meshIndexFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "CreateMeshFromMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_MeshData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_MeshIndexFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Mesh, false>(nullptr, ___internal_method, submesh, bGenerateUVs, bGenerateNormals, meshIndexFormat);
}
 void HoudiniEngineUnity::HEU_GenerateGeoCache::TransferRegularAttributesToVertices(::ArrayW<int32_t> groupVertexList, ::ArrayW<int32_t> allFaceCounts, System::Collections::Generic::List_1<int32_t> groupFaces, System::Collections::Generic::List_1<int32_t> groupVertexOffset, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attribInfo, ::ArrayW<float_t> inData, ByRef<::ArrayW<float_t>> outData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "TransferRegularAttributesToVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<HoudiniEngineUnity::HAPI_AttributeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, groupVertexList, allFaceCounts, groupFaces, groupVertexOffset, attribInfo, inData, outData);
}
 bool HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateGeoGroupUsingGeoCacheVertices(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups, bool bPartInstanced, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>> LODGroupMeshes, ByRef<int32_t> defaultMaterialKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GenerateGeoGroupUsingGeoCacheVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoCache, bGenerateUVs, bGenerateTangents, bGenerateNormals, bUseLODGroups, bPartInstanced, LODGroupMeshes, defaultMaterialKey);
}
 bool HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateGeoGroupUsingGeoCachePoints(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups, bool bPartInstanced, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>> LODGroupMeshes, ByRef<int32_t> defaultMaterialKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "GenerateGeoGroupUsingGeoCachePoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoCache, bGenerateUVs, bGenerateTangents, bGenerateNormals, bUseLODGroups, bPartInstanced, LODGroupMeshes, defaultMaterialKey);
}
 UnityEngine::MeshTopology HoudiniEngineUnity::HEU_GenerateGeoCache::CalculateGroupMeshTopology(System::Collections::Generic::List_1<int32_t> groupFaces, ::ArrayW<int32_t> allFaceCounts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            "CalculateGroupMeshTopology",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::MeshTopology, false>(nullptr, ___internal_method, groupFaces, allFaceCounts);
}
 HoudiniEngineUnity::HEU_GenerateGeoCache HoudiniEngineUnity::HEU_GenerateGeoCache::New_ctor()  {
HoudiniEngineUnity::HEU_GenerateGeoCache o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HEU_GenerateGeoCache>())};
return o;
}
 void HoudiniEngineUnity::HEU_GenerateGeoCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GenerateGeoCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
