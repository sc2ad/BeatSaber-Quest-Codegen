#pragma once
#include "GlobalNamespace/zzzz__SliderMeshConstructor_impl.hpp"
#include "GlobalNamespace/zzzz__SliderMeshConstructorCrossedStrips_def.hpp"
#include "GlobalNamespace/zzzz__VertexPath_def.hpp"
//  Writing Method size for method: GlobalNamespace::SliderMeshConstructorCrossedStrips.CreateSliderMeshInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderMeshConstructorCrossedStrips::*)(GlobalNamespace::VertexPath)>(&GlobalNamespace::SliderMeshConstructorCrossedStrips::CreateSliderMeshInternal)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x224baf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SliderMeshConstructorCrossedStrips),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderMeshConstructorCrossedStrips>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderMeshConstructorCrossedStrips.GetVertexCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::SliderMeshConstructorCrossedStrips::*)(GlobalNamespace::VertexPath)>(&GlobalNamespace::SliderMeshConstructorCrossedStrips::GetVertexCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x224beb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SliderMeshConstructorCrossedStrips),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderMeshConstructorCrossedStrips>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderMeshConstructorCrossedStrips.GetTrianglesCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::SliderMeshConstructorCrossedStrips::*)(GlobalNamespace::VertexPath)>(&GlobalNamespace::SliderMeshConstructorCrossedStrips::GetTrianglesCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x224becc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SliderMeshConstructorCrossedStrips),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderMeshConstructorCrossedStrips>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderMeshConstructorCrossedStrips._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderMeshConstructorCrossedStrips::*)()>(&GlobalNamespace::SliderMeshConstructorCrossedStrips::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x224bef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderMeshConstructorCrossedStrips>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SliderMeshConstructorCrossedStrips::__set__triangleMap(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> GlobalNamespace::SliderMeshConstructorCrossedStrips::__get__triangleMap() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SliderMeshConstructorCrossedStrips::CreateSliderMeshInternal(GlobalNamespace::VertexPath path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderMeshConstructorCrossedStrips>::get(),
                            "CreateSliderMeshInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::VertexPath>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, path);
}
 int32_t GlobalNamespace::SliderMeshConstructorCrossedStrips::GetVertexCount(GlobalNamespace::VertexPath path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderMeshConstructorCrossedStrips>::get(),
                            "GetVertexCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::VertexPath>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, path);
}
 int32_t GlobalNamespace::SliderMeshConstructorCrossedStrips::GetTrianglesCount(GlobalNamespace::VertexPath path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderMeshConstructorCrossedStrips>::get(),
                            "GetTrianglesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::VertexPath>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, path);
}
// Ctor Parameters []
 GlobalNamespace::SliderMeshConstructorCrossedStrips::SliderMeshConstructorCrossedStrips()  : GlobalNamespace::SliderMeshConstructor(THROW_UNLESS(::il2cpp_utils::New<SliderMeshConstructorCrossedStrips>())) {}
 void GlobalNamespace::SliderMeshConstructorCrossedStrips::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderMeshConstructorCrossedStrips>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
