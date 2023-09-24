#pragma once
#include "UnityEngine/UI/zzzz__Graphic_impl.hpp"
#include "HMUI/zzzz__EmptyBoxGraphic_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
//  Writing Method size for method: HMUI::EmptyBoxGraphic.OnPopulateMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::EmptyBoxGraphic::*)(UnityEngine::UI::VertexHelper)>(&HMUI::EmptyBoxGraphic::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x1fb1ad4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::EmptyBoxGraphic),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::EmptyBoxGraphic>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::EmptyBoxGraphic.OnDrawGizmosSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::EmptyBoxGraphic::*)()>(&HMUI::EmptyBoxGraphic::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1fb208c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::EmptyBoxGraphic>::get(),
                            "OnDrawGizmosSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::EmptyBoxGraphic._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::EmptyBoxGraphic::*)()>(&HMUI::EmptyBoxGraphic::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1fb2218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::EmptyBoxGraphic>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::EmptyBoxGraphic::__set__depth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HMUI::EmptyBoxGraphic::__get__depth() const {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HMUI::EmptyBoxGraphic::OnPopulateMesh(UnityEngine::UI::VertexHelper vh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::EmptyBoxGraphic>::get(),
                            "OnPopulateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vh);
}
 void HMUI::EmptyBoxGraphic::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::EmptyBoxGraphic>::get(),
                            "OnDrawGizmosSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 HMUI::EmptyBoxGraphic HMUI::EmptyBoxGraphic::New_ctor()  {
HMUI::EmptyBoxGraphic o{THROW_UNLESS(::il2cpp_utils::New<HMUI::EmptyBoxGraphic>())};
return o;
}
 void HMUI::EmptyBoxGraphic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::EmptyBoxGraphic>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
