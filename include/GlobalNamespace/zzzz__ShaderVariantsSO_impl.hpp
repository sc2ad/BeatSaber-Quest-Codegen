#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ShaderVariantsSO_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/Rendering/zzzz__PassType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant.get_passType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::PassType (::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant::*)()>(&::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant::get_passType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267a760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>::get(),
                            "get_passType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant.get_keywords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant::*)()>(&::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant::get_keywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267a768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>::get(),
                            "get_keywords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant::*)(::UnityEngine::Rendering::PassType, ::StringW)>(&::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x267a770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::PassType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant::__set__passType(::UnityEngine::Rendering::PassType value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::PassType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rendering::PassType>(value));
}
constexpr ::UnityEngine::Rendering::PassType ::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant::__get__passType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::PassType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant::__set__keywords(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant::__get__keywords() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::Rendering::PassType ::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant::get_passType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>::get(),
                            "get_passType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PassType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant::get_keywords()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>::get(),
                            "get_keywords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "passType", ty: "::UnityEngine::Rendering::PassType", modifiers: "", def_value: None }, CppParam { name: "keywords", ty: "::StringW", modifiers: "", def_value: None }]
 ::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant(::UnityEngine::Rendering::PassType passType, ::StringW keywords)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>(passType, keywords))) {}
 void ::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant::_ctor(::UnityEngine::Rendering::PassType passType, ::StringW keywords)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::PassType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, passType, keywords);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant.get_variants
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant> (::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant::*)()>(&::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant::get_variants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267a724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant>::get(),
                            "get_variants",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant.get_shader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Shader (::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant::*)()>(&::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant::get_shader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267a72c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant>::get(),
                            "get_shader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant::*)(::UnityEngine::Shader, ::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>)>(&::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x267a734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant::__set__variants(::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant> ::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant::__get__variants() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant::__set__shader(::UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Shader>(value));
}
constexpr ::UnityEngine::Shader ::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant::__get__shader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant> ::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant::get_variants()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant>::get(),
                            "get_variants",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Shader ::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant::get_shader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant>::get(),
                            "get_shader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Shader, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "shader", ty: "::UnityEngine::Shader", modifiers: "", def_value: None }, CppParam { name: "variants", ty: "::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant::____GlobalNamespace__ShaderVariantsSO__ShaderVariant(::UnityEngine::Shader shader, ::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant> variants)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__ShaderVariantsSO__ShaderVariant>(shader, variants))) {}
 void ::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant::_ctor(::UnityEngine::Shader shader, ::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant> variants)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::______GlobalNamespace__ShaderVariantsSO__ShaderVariant__Variant>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shader, variants);
}
//  Writing Method size for method: ::GlobalNamespace::ShaderVariantsSO.get_shaderVariants
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant> (::GlobalNamespace::ShaderVariantsSO::*)()>(&::GlobalNamespace::ShaderVariantsSO::get_shaderVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267a70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO>::get(),
                            "get_shaderVariants",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderVariantsSO.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShaderVariantsSO::*)(::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant>)>(&::GlobalNamespace::ShaderVariantsSO::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267a714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderVariantsSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShaderVariantsSO::*)()>(&::GlobalNamespace::ShaderVariantsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267a71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ShaderVariantsSO::__set__shaderVariants(::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant> ::GlobalNamespace::ShaderVariantsSO::__get__shaderVariants() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant> ::GlobalNamespace::ShaderVariantsSO::get_shaderVariants()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO>::get(),
                            "get_shaderVariants",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ShaderVariantsSO::Init(::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant> shaderVariants)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__ShaderVariantsSO__ShaderVariant>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shaderVariants);
}
// Ctor Parameters []
 ::GlobalNamespace::ShaderVariantsSO::ShaderVariantsSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<ShaderVariantsSO>())) {}
 void ::GlobalNamespace::ShaderVariantsSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShaderVariantsSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
