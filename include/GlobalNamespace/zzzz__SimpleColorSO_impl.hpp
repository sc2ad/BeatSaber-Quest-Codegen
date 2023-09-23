#pragma once
#include "GlobalNamespace/zzzz__ColorSO_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: GlobalNamespace::SimpleColorSO.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::SimpleColorSO::*)()>(&GlobalNamespace::SimpleColorSO::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11a3710;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SimpleColorSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SimpleColorSO>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SimpleColorSO.SetColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleColorSO::*)(UnityEngine::Color)>(&GlobalNamespace::SimpleColorSO::SetColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11a371c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SimpleColorSO>::get(),
                            "SetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SimpleColorSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleColorSO::*)()>(&GlobalNamespace::SimpleColorSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11a3728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SimpleColorSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SimpleColorSO::__set__color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::SimpleColorSO::__get__color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Color GlobalNamespace::SimpleColorSO::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SimpleColorSO>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SimpleColorSO::SetColor(UnityEngine::Color c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SimpleColorSO>::get(),
                            "SetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c);
}
// Ctor Parameters []
 GlobalNamespace::SimpleColorSO::SimpleColorSO()  : GlobalNamespace::ColorSO(THROW_UNLESS(::il2cpp_utils::New<SimpleColorSO>())) {}
 void GlobalNamespace::SimpleColorSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SimpleColorSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
