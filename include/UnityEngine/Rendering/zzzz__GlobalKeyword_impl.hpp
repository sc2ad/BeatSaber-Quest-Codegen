#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GlobalKeyword.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::GlobalKeyword::*)()>(&::UnityEngine::Rendering::GlobalKeyword::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b76fac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Rendering::GlobalKeyword),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GlobalKeyword>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GlobalKeyword::GlobalKeyword(::StringW m_Name, uint32_t m_Index) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Name = m_Name;
this->m_Index = m_Index;
}
constexpr void ::UnityEngine::Rendering::GlobalKeyword::__set_m_Name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::Rendering::GlobalKeyword::__get_m_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::Rendering::GlobalKeyword::__set_m_Index(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::Rendering::GlobalKeyword::__get_m_Index() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
 ::StringW ::UnityEngine::Rendering::GlobalKeyword::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GlobalKeyword>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
