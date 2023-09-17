#pragma once
namespace {
#include "TMPro/zzzz__ITextElement_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::TMPro::ITextElement.get_sharedMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material (::TMPro::ITextElement::*)()>(&::TMPro::ITextElement::get_sharedMaterial)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::ITextElement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ITextElement>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ITextElement.Rebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::ITextElement::*)(::UnityEngine::UI::CanvasUpdate)>(&::TMPro::ITextElement::Rebuild)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::ITextElement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ITextElement>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ITextElement.GetInstanceID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::ITextElement::*)()>(&::TMPro::ITextElement::GetInstanceID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::ITextElement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ITextElement>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 ::UnityEngine::Material ::TMPro::ITextElement::get_sharedMaterial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ITextElement>::get(),
                            "get_sharedMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::ITextElement::Rebuild(::UnityEngine::UI::CanvasUpdate update)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ITextElement>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CanvasUpdate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, update);
}
 int32_t ::TMPro::ITextElement::GetInstanceID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ITextElement>::get(),
                            "GetInstanceID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
