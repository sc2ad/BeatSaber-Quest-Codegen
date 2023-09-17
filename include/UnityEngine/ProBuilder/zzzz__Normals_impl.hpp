#pragma once
namespace {
#include "UnityEngine/ProBuilder/zzzz__Normals_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normals.ClearIntArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::ProBuilder::Normals::ClearIntArray)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x29c036c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Normals>::get(),
                            "ClearIntArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normals.CalculateTangents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh)>(&::UnityEngine::ProBuilder::Normals::CalculateTangents)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x29c0468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Normals>::get(),
                            "CalculateTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normals.CalculateHardNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh)>(&::UnityEngine::ProBuilder::Normals::CalculateHardNormals)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x29c0964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Normals>::get(),
                            "CalculateHardNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Normals.CalculateNormals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh)>(&::UnityEngine::ProBuilder::Normals::CalculateNormals)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x29c0e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Normals>::get(),
                            "CalculateNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::ProBuilder::Normals::__set_s_SmoothAvg(::ArrayW<::UnityEngine::Vector3> value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "s_SmoothAvg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Normals>::get>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
 ::ArrayW<::UnityEngine::Vector3> ::UnityEngine::ProBuilder::Normals::__get_s_SmoothAvg()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "s_SmoothAvg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Normals>::get>();
}
 void ::UnityEngine::ProBuilder::Normals::__set_s_SmoothAvgCount(::ArrayW<float_t> value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "s_SmoothAvgCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Normals>::get>(std::forward<::ArrayW<float_t>>(value));
}
 ::ArrayW<float_t> ::UnityEngine::ProBuilder::Normals::__get_s_SmoothAvgCount()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "s_SmoothAvgCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Normals>::get>();
}
 void ::UnityEngine::ProBuilder::Normals::__set_s_CachedIntArray(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_CachedIntArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Normals>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> ::UnityEngine::ProBuilder::Normals::__get_s_CachedIntArray()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_CachedIntArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Normals>::get>();
}
 void ::UnityEngine::ProBuilder::Normals::ClearIntArray(int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Normals>::get(),
                            "ClearIntArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, count);
}
 void ::UnityEngine::ProBuilder::Normals::CalculateTangents(::UnityEngine::ProBuilder::ProBuilderMesh mesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Normals>::get(),
                            "CalculateTangents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh);
}
 void ::UnityEngine::ProBuilder::Normals::CalculateHardNormals(::UnityEngine::ProBuilder::ProBuilderMesh mesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Normals>::get(),
                            "CalculateHardNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh);
}
 void ::UnityEngine::ProBuilder::Normals::CalculateNormals(::UnityEngine::ProBuilder::ProBuilderMesh mesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Normals>::get(),
                            "CalculateNormals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh);
}
} // end anonymous namespace
