#pragma once
#include "GlobalNamespace/zzzz__CubemapHelpers_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: GlobalNamespace::CubemapHelpers.get_cubemapHelpersMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material (*)()>(&GlobalNamespace::CubemapHelpers::get_cubemapHelpersMaterial)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x219b63c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get(),
                            "get_cubemapHelpersMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CubemapHelpers.Downsample
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Texture, UnityEngine::RenderTexture)>(&GlobalNamespace::CubemapHelpers::Downsample)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x219b764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get(),
                            "Downsample",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CubemapHelpers.CreateDownsampledCubemap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RenderTexture (*)(UnityEngine::RenderTexture, int32_t)>(&GlobalNamespace::CubemapHelpers::CreateDownsampledCubemap)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x219ba40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get(),
                            "CreateDownsampledCubemap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CubemapHelpers.Create2DTextureFromCubemap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RenderTexture (*)(UnityEngine::RenderTexture)>(&GlobalNamespace::CubemapHelpers::Create2DTextureFromCubemap)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x219bc2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get(),
                            "Create2DTextureFromCubemap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CubemapHelpers.DrawCubemapFace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Texture, UnityEngine::CubemapFace)>(&GlobalNamespace::CubemapHelpers::DrawCubemapFace)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x219b890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get(),
                            "DrawCubemapFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::CubemapFace>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::CubemapHelpers::__set__cubemapHelpersMaterial(UnityEngine::Material value)  {
::cordl_internals::setStaticField<UnityEngine::Material, "_cubemapHelpersMaterial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get>(std::forward<UnityEngine::Material>(value));
}
 UnityEngine::Material GlobalNamespace::CubemapHelpers::__get__cubemapHelpersMaterial()  {
return ::cordl_internals::getStaticField<UnityEngine::Material, "_cubemapHelpersMaterial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get>();
}
 void GlobalNamespace::CubemapHelpers::__set__cubePropertyId(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_cubePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::CubemapHelpers::__get__cubePropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "_cubePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get>();
}
 void GlobalNamespace::CubemapHelpers::__set__cubeFaceNumberId(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_cubeFaceNumberId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::CubemapHelpers::__get__cubeFaceNumberId()  {
return ::cordl_internals::getStaticField<int32_t, "_cubeFaceNumberId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get>();
}
 void GlobalNamespace::CubemapHelpers::__set__cubemapFaceToCubeFaceNumberDict(System::Collections::Generic::Dictionary_2<UnityEngine::CubemapFace,int32_t> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::CubemapFace,int32_t>, "_cubemapFaceToCubeFaceNumberDict", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get>(std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::CubemapFace,int32_t>>(value));
}
 System::Collections::Generic::Dictionary_2<UnityEngine::CubemapFace,int32_t> GlobalNamespace::CubemapHelpers::__get__cubemapFaceToCubeFaceNumberDict()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::CubemapFace,int32_t>, "_cubemapFaceToCubeFaceNumberDict", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get>();
}
 void GlobalNamespace::CubemapHelpers::__set__cubemapFaces(::ArrayW<UnityEngine::CubemapFace> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::CubemapFace>, "_cubemapFaces", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get>(std::forward<::ArrayW<UnityEngine::CubemapFace>>(value));
}
 ::ArrayW<UnityEngine::CubemapFace> GlobalNamespace::CubemapHelpers::__get__cubemapFaces()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::CubemapFace>, "_cubemapFaces", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get>();
}
 UnityEngine::Material GlobalNamespace::CubemapHelpers::get_cubemapHelpersMaterial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get(),
                            "get_cubemapHelpersMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Material, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::CubemapHelpers::Downsample(UnityEngine::Texture src, UnityEngine::RenderTexture dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get(),
                            "Downsample",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, src, dest);
}
 UnityEngine::RenderTexture GlobalNamespace::CubemapHelpers::CreateDownsampledCubemap(UnityEngine::RenderTexture src, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get(),
                            "CreateDownsampledCubemap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::RenderTexture, false>(nullptr, ___internal_method, src, count);
}
 UnityEngine::RenderTexture GlobalNamespace::CubemapHelpers::Create2DTextureFromCubemap(UnityEngine::RenderTexture src)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get(),
                            "Create2DTextureFromCubemap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::RenderTexture, false>(nullptr, ___internal_method, src);
}
 void GlobalNamespace::CubemapHelpers::DrawCubemapFace(UnityEngine::Texture cubemap, UnityEngine::CubemapFace cubemapFace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CubemapHelpers>::get(),
                            "DrawCubemapFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::CubemapFace>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cubemap, cubemapFace);
}
