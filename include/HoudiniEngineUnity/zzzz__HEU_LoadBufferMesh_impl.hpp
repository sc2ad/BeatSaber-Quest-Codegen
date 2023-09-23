#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferMesh_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GenerateGeoCache_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoGroup_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_LoadBufferMesh._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_LoadBufferMesh::*)()>(&HoudiniEngineUnity::HEU_LoadBufferMesh::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x203a388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_LoadBufferMesh>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__set__geoCache(HoudiniEngineUnity::HEU_GenerateGeoCache value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HEU_GenerateGeoCache, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HEU_GenerateGeoCache>(value));
}
constexpr HoudiniEngineUnity::HEU_GenerateGeoCache HoudiniEngineUnity::HEU_LoadBufferMesh::__get__geoCache() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HEU_GenerateGeoCache, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__set__LODGroupMeshes(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup> HoudiniEngineUnity::HEU_LoadBufferMesh::__get__LODGroupMeshes() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__set__defaultMaterialKey(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_LoadBufferMesh::__get__defaultMaterialKey() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__set__bGenerateUVs(bool value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_LoadBufferMesh::__get__bGenerateUVs() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__set__bGenerateTangents(bool value)  {
::cordl_internals::setInstanceField<bool, 0x45>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_LoadBufferMesh::__get__bGenerateTangents() const {
return ::cordl_internals::getInstanceField<bool, 0x45>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__set__bGenerateNormals(bool value)  {
::cordl_internals::setInstanceField<bool, 0x46>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_LoadBufferMesh::__get__bGenerateNormals() const {
return ::cordl_internals::getInstanceField<bool, 0x46>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferMesh::__set__bPartInstanced(bool value)  {
::cordl_internals::setInstanceField<bool, 0x47>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_LoadBufferMesh::__get__bPartInstanced() const {
return ::cordl_internals::getInstanceField<bool, 0x47>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 HoudiniEngineUnity::HEU_LoadBufferMesh::HEU_LoadBufferMesh()  : HoudiniEngineUnity::HEU_LoadBufferBase(THROW_UNLESS(::il2cpp_utils::New<HEU_LoadBufferMesh>())) {}
 void HoudiniEngineUnity::HEU_LoadBufferMesh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_LoadBufferMesh>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
