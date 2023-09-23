#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_InputData_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterface_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterfaceMesh_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2057688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes::__set__inputMeshes(System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh> HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes::__get__inputMeshes() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes::__set__hasLOD(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes::__get__hasLOD() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes()  : HoudiniEngineUnity::HEU_InputData(THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes>())) {}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::*)()>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2057704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__set__mesh(UnityEngine::Mesh value)  {
::cordl_internals::setInstanceField<UnityEngine::Mesh, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Mesh>(value));
}
constexpr UnityEngine::Mesh HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__get__mesh() const {
return ::cordl_internals::getInstanceField<UnityEngine::Mesh, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__set__materials(::ArrayW<UnityEngine::Material> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Material>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Material>>(value));
}
constexpr ::ArrayW<UnityEngine::Material> HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__get__materials() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Material>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__set__meshPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__get__meshPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__set__meshName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__get__meshName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__set__numVertices(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__get__numVertices() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__set__numSubMeshes(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__get__numSubMeshes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__set__indexStart(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__get__indexStart() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__set__indexCount(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__get__indexCount() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__set__LODScreenTransition(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__get__LODScreenTransition() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__set__transform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::__get__transform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh>())) {}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputInterfaceMesh._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputInterfaceMesh::*)()>(&HoudiniEngineUnity::HEU_InputInterfaceMesh::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2054a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputInterfaceMesh.CreateInputNodeWithDataUpload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceMesh::*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, UnityEngine::GameObject, ByRef<int32_t>)>(&HoudiniEngineUnity::HEU_InputInterfaceMesh::CreateInputNodeWithDataUpload)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2054aa0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HEU_InputInterfaceMesh),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputInterfaceMesh.IsThisInputObjectSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceMesh::*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_InputInterfaceMesh::IsThisInputObjectSupported)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2057188;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HEU_InputInterfaceMesh),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputInterfaceMesh.GetUVsFromMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Mesh, ::ArrayW<UnityEngine::Vector2>, System::Collections::Generic::List_1<UnityEngine::Vector3>, int32_t)>(&HoudiniEngineUnity::HEU_InputInterfaceMesh::GetUVsFromMesh)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x20572ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                            "GetUVsFromMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputInterfaceMesh.UploadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceMesh::*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, HoudiniEngineUnity::HEU_InputData)>(&HoudiniEngineUnity::HEU_InputInterfaceMesh::UploadData)> {
  constexpr static std::size_t size = 0x21f0;
  constexpr static std::size_t addrs = 0x2054f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                            "UploadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputInterfaceMesh.GenerateMeshDatasFromGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes (HoudiniEngineUnity::HEU_InputInterfaceMesh::*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_InputInterfaceMesh::GenerateMeshDatasFromGameObject)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x2054c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                            "GenerateMeshDatasFromGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputInterfaceMesh.CreateSingleMeshData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh (*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_InputInterfaceMesh::CreateSingleMeshData)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x205737c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                            "CreateSingleMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputInterfaceMesh.GetMeshFromObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh (*)(UnityEngine::GameObject)>(&HoudiniEngineUnity::HEU_InputInterfaceMesh::GetMeshFromObject)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2057550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                            "GetMeshFromObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 HoudiniEngineUnity::HEU_InputInterfaceMesh::HEU_InputInterfaceMesh()  : HoudiniEngineUnity::HEU_InputInterface(THROW_UNLESS(::il2cpp_utils::New<HEU_InputInterfaceMesh>())) {}
 void HoudiniEngineUnity::HEU_InputInterfaceMesh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::HEU_InputInterfaceMesh::CreateInputNodeWithDataUpload(HoudiniEngineUnity::HEU_SessionBase session, int32_t connectNodeID, UnityEngine::GameObject inputObject, ByRef<int32_t> inputNodeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                            "CreateInputNodeWithDataUpload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, connectNodeID, inputObject, inputNodeID);
}
 bool HoudiniEngineUnity::HEU_InputInterfaceMesh::IsThisInputObjectSupported(UnityEngine::GameObject inputObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                            "IsThisInputObjectSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, inputObject);
}
 void HoudiniEngineUnity::HEU_InputInterfaceMesh::GetUVsFromMesh(UnityEngine::Mesh mesh, ::ArrayW<UnityEngine::Vector2> srcUVs, System::Collections::Generic::List_1<UnityEngine::Vector3> destUVs, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                            "GetUVsFromMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, srcUVs, destUVs, index);
}
 bool HoudiniEngineUnity::HEU_InputInterfaceMesh::UploadData(HoudiniEngineUnity::HEU_SessionBase session, int32_t inputNodeID, HoudiniEngineUnity::HEU_InputData inputData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                            "UploadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_InputData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, inputNodeID, inputData);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes HoudiniEngineUnity::HEU_InputInterfaceMesh::GenerateMeshDatasFromGameObject(UnityEngine::GameObject inputObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                            "GenerateMeshDatasFromGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes, false>(const_cast<void*>(instance), ___internal_method, inputObject);
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh HoudiniEngineUnity::HEU_InputInterfaceMesh::CreateSingleMeshData(UnityEngine::GameObject meshGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                            "CreateSingleMeshData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh, false>(nullptr, ___internal_method, meshGameObject);
}
 UnityEngine::Mesh HoudiniEngineUnity::HEU_InputInterfaceMesh::GetMeshFromObject(UnityEngine::GameObject meshGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceMesh>::get(),
                            "GetMeshFromObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Mesh, false>(nullptr, ___internal_method, meshGameObject);
}
