#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_GeoGroup_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VertexEntry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MeshData_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeoGroup.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HoudiniEngineUnity::HEU_GeoGroup::*)(HoudiniEngineUnity::HEU_GeoGroup)>(&HoudiniEngineUnity::HEU_GeoGroup::CompareTo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2053dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeoGroup>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeoGroup>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeoGroup.SetupNormalIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_GeoGroup::*)(int32_t)>(&HoudiniEngineUnity::HEU_GeoGroup::SetupNormalIndices)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2051914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeoGroup>::get(),
                            "SetupNormalIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_GeoGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_GeoGroup::*)()>(&HoudiniEngineUnity::HEU_GeoGroup::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2051898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeoGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IComparable_1<HoudiniEngineUnity::HEU_GeoGroup>
constexpr  HoudiniEngineUnity::HEU_GeoGroup::operator System::IComparable_1<HoudiniEngineUnity::HEU_GeoGroup>() const noexcept {
return System::IComparable_1<HoudiniEngineUnity::HEU_GeoGroup>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GeoGroup::__set__groupName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_GeoGroup::__get__groupName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GeoGroup::__set__subMeshesMap(System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MeshData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MeshData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MeshData>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MeshData> HoudiniEngineUnity::HEU_GeoGroup::__get__subMeshesMap() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MeshData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_GeoGroup::__set__sharedNormalIndices(::ArrayW<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VertexEntry>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VertexEntry>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VertexEntry>>>(value));
}
constexpr ::ArrayW<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VertexEntry>> HoudiniEngineUnity::HEU_GeoGroup::__get__sharedNormalIndices() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VertexEntry>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t HoudiniEngineUnity::HEU_GeoGroup::CompareTo(HoudiniEngineUnity::HEU_GeoGroup other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeoGroup>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_GeoGroup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other);
}
 void HoudiniEngineUnity::HEU_GeoGroup::SetupNormalIndices(int32_t indicesCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeoGroup>::get(),
                            "SetupNormalIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indicesCount);
}
// Ctor Parameters []
 HoudiniEngineUnity::HEU_GeoGroup::HEU_GeoGroup()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_GeoGroup>())) {}
 void HoudiniEngineUnity::HEU_GeoGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_GeoGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
