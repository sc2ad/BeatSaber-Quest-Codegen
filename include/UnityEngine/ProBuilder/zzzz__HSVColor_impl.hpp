#pragma once
#include "UnityEngine/ProBuilder/zzzz__HSVColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::HSVColor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::HSVColor::*)(float_t, float_t, float_t)>(&UnityEngine::ProBuilder::HSVColor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x29a98a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::HSVColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::HSVColor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::HSVColor::*)(float_t, float_t, float_t, float_t)>(&UnityEngine::ProBuilder::HSVColor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x29a98e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::HSVColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::HSVColor.FromRGB
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::HSVColor (*)(UnityEngine::Color)>(&UnityEngine::ProBuilder::HSVColor::FromRGB)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29a9928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::HSVColor>::get(),
                            "FromRGB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::HSVColor.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::HSVColor::*)()>(&UnityEngine::ProBuilder::HSVColor::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x29a9bc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::HSVColor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::HSVColor>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::HSVColor.SqrDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ProBuilder::HSVColor::*)(UnityEngine::ProBuilder::HSVColor)>(&UnityEngine::ProBuilder::HSVColor::SqrDistance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x29a9c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::HSVColor>::get(),
                            "SqrDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::HSVColor>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::HSVColor::__set_h(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::ProBuilder::HSVColor::__get_h() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::HSVColor::__set_s(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::ProBuilder::HSVColor::__get_s() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::HSVColor::__set_v(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::ProBuilder::HSVColor::__get_v() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "s", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "v", ty: "float_t", modifiers: "", def_value: None }]
 UnityEngine::ProBuilder::HSVColor::HSVColor(float_t h, float_t s, float_t v)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HSVColor>(h, s, v))) {}
 void UnityEngine::ProBuilder::HSVColor::_ctor(float_t h, float_t s, float_t v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::HSVColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, h, s, v);
}
// Ctor Parameters [CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "s", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "v", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "sv_modifier", ty: "float_t", modifiers: "", def_value: None }]
 UnityEngine::ProBuilder::HSVColor::HSVColor(float_t h, float_t s, float_t v, float_t sv_modifier)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HSVColor>(h, s, v, sv_modifier))) {}
 void UnityEngine::ProBuilder::HSVColor::_ctor(float_t h, float_t s, float_t v, float_t sv_modifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::HSVColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, h, s, v, sv_modifier);
}
 UnityEngine::ProBuilder::HSVColor UnityEngine::ProBuilder::HSVColor::FromRGB(UnityEngine::Color col)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::HSVColor>::get(),
                            "FromRGB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::HSVColor, false>(nullptr, ___internal_method, col);
}
 ::StringW UnityEngine::ProBuilder::HSVColor::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::HSVColor>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ProBuilder::HSVColor::SqrDistance(UnityEngine::ProBuilder::HSVColor InColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::HSVColor>::get(),
                            "SqrDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::HSVColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, InColor);
}
