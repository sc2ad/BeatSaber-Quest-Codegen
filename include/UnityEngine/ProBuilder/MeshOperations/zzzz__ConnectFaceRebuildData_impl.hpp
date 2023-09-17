#pragma once
namespace {
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ConnectFaceRebuildData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::*)(::UnityEngine::ProBuilder::FaceRebuildData, ::System::Collections::Generic::List_1<int32_t>)>(&::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a0da64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__set_faceRebuildData(::UnityEngine::ProBuilder::FaceRebuildData value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::FaceRebuildData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::FaceRebuildData>(value));
}
constexpr ::UnityEngine::ProBuilder::FaceRebuildData ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__get_faceRebuildData() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::FaceRebuildData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__set_newVertexIndexes(::System::Collections::Generic::List_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::List_1<int32_t> ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__get_newVertexIndexes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "faceRebuildData", ty: "::UnityEngine::ProBuilder::FaceRebuildData", modifiers: "", def_value: None }, CppParam { name: "newVertexIndexes", ty: "::System::Collections::Generic::List_1<int32_t>", modifiers: "", def_value: None }]
 ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::ConnectFaceRebuildData(::UnityEngine::ProBuilder::FaceRebuildData faceRebuildData, ::System::Collections::Generic::List_1<int32_t> newVertexIndexes)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ConnectFaceRebuildData>(faceRebuildData, newVertexIndexes))) {}
 void ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::_ctor(::UnityEngine::ProBuilder::FaceRebuildData faceRebuildData, ::System::Collections::Generic::List_1<int32_t> newVertexIndexes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, faceRebuildData, newVertexIndexes);
}
} // end anonymous namespace
