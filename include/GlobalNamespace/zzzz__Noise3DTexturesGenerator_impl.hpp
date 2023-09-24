#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Noise3DTexturesGenerator_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
#include "GlobalNamespace/zzzz__Noise3DTexturesGenerator_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "globalPropertyName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "materialPropertyNameCouples", ty: "::ArrayW<GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple>", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple::GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple(::StringW globalPropertyName, ::ArrayW<GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple> materialPropertyNameCouples) noexcept : ::bs_hook::ValueTypeWrapper() {this->globalPropertyName = globalPropertyName;
this->materialPropertyNameCouples = materialPropertyNameCouples;
}
constexpr void GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple::__set_globalPropertyName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple::__get_globalPropertyName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple::__set_materialPropertyNameCouples(::ArrayW<GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple>, 0x8>(this->__instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple> GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple::__get_materialPropertyNameCouples() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple>, 0x8>(this->__instance);
}
// Ctor Parameters [CppParam { name: "texturePropertyName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple::GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple(::StringW texturePropertyName, UnityEngine::Material material) noexcept : ::bs_hook::ValueTypeWrapper() {this->texturePropertyName = texturePropertyName;
this->material = material;
}
constexpr void GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple::__set_texturePropertyName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple::__get_texturePropertyName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple::__set_material(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x8>(this->__instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialPropertyNameCouple::__get_material() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x8>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::Noise3DTexturesGenerator.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Noise3DTexturesGenerator::*)()>(&GlobalNamespace::Noise3DTexturesGenerator::Awake)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2679a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Noise3DTexturesGenerator>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Noise3DTexturesGenerator.CreateNoisePixels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Color32> (*)(int32_t, int32_t, int32_t, float_t, int32_t, float_t)>(&GlobalNamespace::Noise3DTexturesGenerator::CreateNoisePixels)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x2679c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Noise3DTexturesGenerator>::get(),
                            "CreateNoisePixels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Noise3DTexturesGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Noise3DTexturesGenerator::*)()>(&GlobalNamespace::Noise3DTexturesGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2679f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Noise3DTexturesGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::Noise3DTexturesGenerator::__set__data(::ArrayW<GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple> GlobalNamespace::Noise3DTexturesGenerator::__get__data() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__Noise3DTexturesGenerator__MaterialTextureParamsCouple>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::Noise3DTexturesGenerator::__set__texture(UnityEngine::Texture3D value)  {
::cordl_internals::setStaticField<UnityEngine::Texture3D, "_texture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Noise3DTexturesGenerator>::get>(std::forward<UnityEngine::Texture3D>(value));
}
 UnityEngine::Texture3D GlobalNamespace::Noise3DTexturesGenerator::__get__texture()  {
return ::cordl_internals::getStaticField<UnityEngine::Texture3D, "_texture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Noise3DTexturesGenerator>::get>();
}
 void GlobalNamespace::Noise3DTexturesGenerator::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Noise3DTexturesGenerator>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<UnityEngine::Color32> GlobalNamespace::Noise3DTexturesGenerator::CreateNoisePixels(int32_t width, int32_t height, int32_t depth, float_t scale, int32_t repeat, float_t contrast)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Noise3DTexturesGenerator>::get(),
                            "CreateNoisePixels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Color32>, false>(nullptr, ___internal_method, width, height, depth, scale, repeat, contrast);
}
 GlobalNamespace::Noise3DTexturesGenerator GlobalNamespace::Noise3DTexturesGenerator::New_ctor()  {
GlobalNamespace::Noise3DTexturesGenerator o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Noise3DTexturesGenerator>())};
return o;
}
 void GlobalNamespace::Noise3DTexturesGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Noise3DTexturesGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
