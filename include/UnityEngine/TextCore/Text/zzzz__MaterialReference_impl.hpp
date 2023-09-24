#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MaterialReference_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
//  Writing Method size for method: UnityEngine::TextCore::Text::MaterialReference._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::MaterialReference::*)(int32_t, UnityEngine::TextCore::Text::FontAsset, UnityEngine::TextCore::Text::SpriteAsset, UnityEngine::Material, float_t)>(&UnityEngine::TextCore::Text::MaterialReference::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2bcbeb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::MaterialReference>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::FontAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::SpriteAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::MaterialReference.AddMaterialReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::Material, UnityEngine::TextCore::Text::FontAsset, ByRef<::ArrayW<UnityEngine::TextCore::Text::MaterialReference>>, System::Collections::Generic::Dictionary_2<int32_t,int32_t>)>(&UnityEngine::TextCore::Text::MaterialReference::AddMaterialReference)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2bcbf34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::MaterialReference>::get(),
                            "AddMaterialReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::FontAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::Text::MaterialReference>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::MaterialReference.AddMaterialReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::Material, UnityEngine::TextCore::Text::SpriteAsset, ByRef<::ArrayW<UnityEngine::TextCore::Text::MaterialReference>>, System::Collections::Generic::Dictionary_2<int32_t,int32_t>)>(&UnityEngine::TextCore::Text::MaterialReference::AddMaterialReference)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2bcc140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::MaterialReference>::get(),
                            "AddMaterialReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::SpriteAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::Text::MaterialReference>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontAsset", ty: "UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "spriteAsset", ty: "UnityEngine::TextCore::Text::SpriteAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "isDefaultMaterial", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isFallbackMaterial", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "fallbackMaterial", ty: "UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "padding", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "referenceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextCore::Text::MaterialReference::MaterialReference(int32_t index, UnityEngine::TextCore::Text::FontAsset fontAsset, UnityEngine::TextCore::Text::SpriteAsset spriteAsset, UnityEngine::Material material, bool isDefaultMaterial, bool isFallbackMaterial, UnityEngine::Material fallbackMaterial, float_t padding, int32_t referenceCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->index = index;
this->fontAsset = fontAsset;
this->spriteAsset = spriteAsset;
this->material = material;
this->isDefaultMaterial = isDefaultMaterial;
this->isFallbackMaterial = isFallbackMaterial;
this->fallbackMaterial = fallbackMaterial;
this->padding = padding;
this->referenceCount = referenceCount;
}
constexpr void UnityEngine::TextCore::Text::MaterialReference::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::MaterialReference::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::MaterialReference::__set_fontAsset(UnityEngine::TextCore::Text::FontAsset value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::FontAsset, 0x8>(this->__instance, std::forward<UnityEngine::TextCore::Text::FontAsset>(value));
}
constexpr UnityEngine::TextCore::Text::FontAsset UnityEngine::TextCore::Text::MaterialReference::__get_fontAsset() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::FontAsset, 0x8>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::MaterialReference::__set_spriteAsset(UnityEngine::TextCore::Text::SpriteAsset value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::SpriteAsset, 0x10>(this->__instance, std::forward<UnityEngine::TextCore::Text::SpriteAsset>(value));
}
constexpr UnityEngine::TextCore::Text::SpriteAsset UnityEngine::TextCore::Text::MaterialReference::__get_spriteAsset() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::SpriteAsset, 0x10>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::MaterialReference::__set_material(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x18>(this->__instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material UnityEngine::TextCore::Text::MaterialReference::__get_material() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x18>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::MaterialReference::__set_isDefaultMaterial(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::TextCore::Text::MaterialReference::__get_isDefaultMaterial() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::MaterialReference::__set_isFallbackMaterial(bool value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::TextCore::Text::MaterialReference::__get_isFallbackMaterial() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::MaterialReference::__set_fallbackMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x28>(this->__instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material UnityEngine::TextCore::Text::MaterialReference::__get_fallbackMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x28>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::MaterialReference::__set_padding(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::MaterialReference::__get_padding() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::MaterialReference::__set_referenceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::MaterialReference::__get_referenceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->__instance);
}
 void UnityEngine::TextCore::Text::MaterialReference::_ctor(int32_t index, UnityEngine::TextCore::Text::FontAsset fontAsset, UnityEngine::TextCore::Text::SpriteAsset spriteAsset, UnityEngine::Material material, float_t padding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::MaterialReference>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::FontAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::SpriteAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index, fontAsset, spriteAsset, material, padding);
}
 int32_t UnityEngine::TextCore::Text::MaterialReference::AddMaterialReference(UnityEngine::Material material, UnityEngine::TextCore::Text::FontAsset fontAsset, ByRef<::ArrayW<UnityEngine::TextCore::Text::MaterialReference>> materialReferences, System::Collections::Generic::Dictionary_2<int32_t,int32_t> materialReferenceIndexLookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::MaterialReference>::get(),
                            "AddMaterialReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::FontAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::Text::MaterialReference>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, material, fontAsset, materialReferences, materialReferenceIndexLookup);
}
 int32_t UnityEngine::TextCore::Text::MaterialReference::AddMaterialReference(UnityEngine::Material material, UnityEngine::TextCore::Text::SpriteAsset spriteAsset, ByRef<::ArrayW<UnityEngine::TextCore::Text::MaterialReference>> materialReferences, System::Collections::Generic::Dictionary_2<int32_t,int32_t> materialReferenceIndexLookup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::MaterialReference>::get(),
                            "AddMaterialReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::SpriteAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::Text::MaterialReference>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<int32_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, material, spriteAsset, materialReferences, materialReferenceIndexLookup);
}
