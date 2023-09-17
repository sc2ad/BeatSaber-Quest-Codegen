#pragma once
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradient_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element::*)()>(&::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f925dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element::__set_color(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element::__get_color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element::__set_startT(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element::__get_startT() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element::__set_exp(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element::__get_exp() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element>())) {}
 void ::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradient.get_elements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element> (::GlobalNamespace::BloomPrePassBackgroundColorsGradient::*)()>(&::GlobalNamespace::BloomPrePassBackgroundColorsGradient::get_elements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f92134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>::get(),
                            "get_elements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradient.UpdatePixels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradient::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>, int32_t)>(&::GlobalNamespace::BloomPrePassBackgroundColorsGradient::UpdatePixels)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x1f9213c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::BloomPrePassBackgroundColorsGradient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradient.EvaluateColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::BloomPrePassBackgroundColorsGradient::*)(float_t)>(&::GlobalNamespace::BloomPrePassBackgroundColorsGradient::EvaluateColor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1f92448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>::get(),
                            "EvaluateColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradient::*)()>(&::GlobalNamespace::BloomPrePassBackgroundColorsGradient::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1f92528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BloomPrePassBackgroundColorsGradient::__set__elements(::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element> ::GlobalNamespace::BloomPrePassBackgroundColorsGradient::__get__elements() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element> ::GlobalNamespace::BloomPrePassBackgroundColorsGradient::get_elements()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>::get(),
                            "get_elements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::____GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BloomPrePassBackgroundColorsGradient::UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> pixels, int32_t numberOfPixels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>::get(),
                            "UpdatePixels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Color32>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pixels, numberOfPixels);
}
 ::UnityEngine::Color ::GlobalNamespace::BloomPrePassBackgroundColorsGradient::EvaluateColor(float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>::get(),
                            "EvaluateColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method, t);
}
// Ctor Parameters []
 ::GlobalNamespace::BloomPrePassBackgroundColorsGradient::BloomPrePassBackgroundColorsGradient()  : ::GlobalNamespace::BloomPrePassBackgroundTextureGradient(THROW_UNLESS(::il2cpp_utils::New<BloomPrePassBackgroundColorsGradient>())) {}
 void ::GlobalNamespace::BloomPrePassBackgroundColorsGradient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
