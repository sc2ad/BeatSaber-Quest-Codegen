#pragma once
#include "GlobalNamespace/zzzz__ColorSO_impl.hpp"
#include "GlobalNamespace/zzzz__MultipliedAndAddedColorSO_def.hpp"
#include "GlobalNamespace/zzzz__SimpleColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultipliedAndAddedColorSO.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::MultipliedAndAddedColorSO::*)()>(&GlobalNamespace::MultipliedAndAddedColorSO::get_color)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x11a3648;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultipliedAndAddedColorSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultipliedAndAddedColorSO>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultipliedAndAddedColorSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultipliedAndAddedColorSO::*)()>(&GlobalNamespace::MultipliedAndAddedColorSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11a36b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultipliedAndAddedColorSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultipliedAndAddedColorSO::__set__baseColor(GlobalNamespace::SimpleColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SimpleColorSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SimpleColorSO>(value));
}
constexpr GlobalNamespace::SimpleColorSO GlobalNamespace::MultipliedAndAddedColorSO::__get__baseColor() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SimpleColorSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultipliedAndAddedColorSO::__set__multiplierColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::MultipliedAndAddedColorSO::__get__multiplierColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultipliedAndAddedColorSO::__set__addColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::MultipliedAndAddedColorSO::__get__addColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Color GlobalNamespace::MultipliedAndAddedColorSO::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultipliedAndAddedColorSO>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultipliedAndAddedColorSO::MultipliedAndAddedColorSO()  : GlobalNamespace::ColorSO(THROW_UNLESS(::il2cpp_utils::New<MultipliedAndAddedColorSO>())) {}
 void GlobalNamespace::MultipliedAndAddedColorSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultipliedAndAddedColorSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
