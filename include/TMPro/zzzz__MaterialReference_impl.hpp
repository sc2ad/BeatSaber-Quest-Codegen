#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "TMPro/zzzz__MaterialReference_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: TMPro::MaterialReference._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::MaterialReference::*)(int32_t, TMPro::TMP_FontAsset, TMPro::TMP_SpriteAsset, UnityEngine::Material, float_t)>(&TMPro::MaterialReference::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a58360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::MaterialReference>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_FontAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_SpriteAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::MaterialReference.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<TMPro::MaterialReference>, TMPro::TMP_FontAsset)>(&TMPro::MaterialReference::Contains)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2a583dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::MaterialReference>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TMPro::MaterialReference>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_FontAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::MaterialReference.AddMaterialReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::Material, TMPro::TMP_FontAsset, ByRef<::ArrayW<TMPro::MaterialReference>>, System::Collections::Generic::Dictionary_2<int32_t,int32_t>)>(&TMPro::MaterialReference::AddMaterialReference)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2a584d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::MaterialReference>::get(),
                            "AddMaterialReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_FontAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TMPro::MaterialReference>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::MaterialReference.AddMaterialReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::Material, TMPro::TMP_SpriteAsset, ByRef<::ArrayW<TMPro::MaterialReference>>, System::Collections::Generic::Dictionary_2<int32_t,int32_t>)>(&TMPro::MaterialReference::AddMaterialReference)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2a586e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::MaterialReference>::get(),
                            "AddMaterialReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_SpriteAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TMPro::MaterialReference>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontAsset", ty: "TMPro::TMP_FontAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "spriteAsset", ty: "TMPro::TMP_SpriteAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "isDefaultMaterial", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isFallbackMaterial", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "fallbackMaterial", ty: "UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "padding", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "referenceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::MaterialReference::MaterialReference(int32_t index, TMPro::TMP_FontAsset fontAsset, TMPro::TMP_SpriteAsset spriteAsset, UnityEngine::Material material, bool isDefaultMaterial, bool isFallbackMaterial, UnityEngine::Material fallbackMaterial, float_t padding, int32_t referenceCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->index = index;
this->fontAsset = fontAsset;
this->spriteAsset = spriteAsset;
this->material = material;
this->isDefaultMaterial = isDefaultMaterial;
this->isFallbackMaterial = isFallbackMaterial;
this->fallbackMaterial = fallbackMaterial;
this->padding = padding;
this->referenceCount = referenceCount;
}
constexpr void TMPro::MaterialReference::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::MaterialReference::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void TMPro::MaterialReference::__set_fontAsset(TMPro::TMP_FontAsset value)  {
::cordl_internals::setInstanceField<TMPro::TMP_FontAsset, 0x8>(this->__instance, std::forward<TMPro::TMP_FontAsset>(value));
}
constexpr TMPro::TMP_FontAsset TMPro::MaterialReference::__get_fontAsset() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_FontAsset, 0x8>(this->__instance);
}
constexpr void TMPro::MaterialReference::__set_spriteAsset(TMPro::TMP_SpriteAsset value)  {
::cordl_internals::setInstanceField<TMPro::TMP_SpriteAsset, 0x10>(this->__instance, std::forward<TMPro::TMP_SpriteAsset>(value));
}
constexpr TMPro::TMP_SpriteAsset TMPro::MaterialReference::__get_spriteAsset() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_SpriteAsset, 0x10>(this->__instance);
}
constexpr void TMPro::MaterialReference::__set_material(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x18>(this->__instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material TMPro::MaterialReference::__get_material() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x18>(this->__instance);
}
constexpr void TMPro::MaterialReference::__set_isDefaultMaterial(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->__instance, std::forward<bool>(value));
}
constexpr bool TMPro::MaterialReference::__get_isDefaultMaterial() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->__instance);
}
constexpr void TMPro::MaterialReference::__set_isFallbackMaterial(bool value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->__instance, std::forward<bool>(value));
}
constexpr bool TMPro::MaterialReference::__get_isFallbackMaterial() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->__instance);
}
constexpr void TMPro::MaterialReference::__set_fallbackMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x28>(this->__instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material TMPro::MaterialReference::__get_fallbackMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x28>(this->__instance);
}
constexpr void TMPro::MaterialReference::__set_padding(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::MaterialReference::__get_padding() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->__instance);
}
constexpr void TMPro::MaterialReference::__set_referenceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::MaterialReference::__get_referenceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->__instance);
}
 void TMPro::MaterialReference::_ctor(int32_t index, TMPro::TMP_FontAsset fontAsset, TMPro::TMP_SpriteAsset spriteAsset, UnityEngine::Material material, float_t padding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::MaterialReference>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_FontAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_SpriteAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index, fontAsset, spriteAsset, material, padding);
}
 bool TMPro::MaterialReference::Contains(::ArrayW<TMPro::MaterialReference> materialReferences, TMPro::TMP_FontAsset fontAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::MaterialReference>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TMPro::MaterialReference>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_FontAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, materialReferences, fontAsset);
}
 int32_t TMPro::MaterialReference::AddMaterialReference(UnityEngine::Material material, TMPro::TMP_FontAsset fontAsset, ByRef<::ArrayW<TMPro::MaterialReference>> materialReferences, System::Collections::Generic::Dictionary_2<int32_t,int32_t> materialReferenceIndexLookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::MaterialReference>::get(),
                            "AddMaterialReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_FontAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TMPro::MaterialReference>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, material, fontAsset, materialReferences, materialReferenceIndexLookup);
}
 int32_t TMPro::MaterialReference::AddMaterialReference(UnityEngine::Material material, TMPro::TMP_SpriteAsset spriteAsset, ByRef<::ArrayW<TMPro::MaterialReference>> materialReferences, System::Collections::Generic::Dictionary_2<int32_t,int32_t> materialReferenceIndexLookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::MaterialReference>::get(),
                            "AddMaterialReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_SpriteAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TMPro::MaterialReference>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, material, spriteAsset, materialReferences, materialReferenceIndexLookup);
}
