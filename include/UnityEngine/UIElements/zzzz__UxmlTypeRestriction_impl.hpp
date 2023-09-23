#pragma once
#include "UnityEngine/UIElements/zzzz__UxmlTypeRestriction_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::UxmlTypeRestriction.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UxmlTypeRestriction::*)(UnityEngine::UIElements::UxmlTypeRestriction)>(&UnityEngine::UIElements::UxmlTypeRestriction::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c964b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::UxmlTypeRestriction),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UxmlTypeRestriction>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UxmlTypeRestriction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UxmlTypeRestriction::*)()>(&UnityEngine::UIElements::UxmlTypeRestriction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c964c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UxmlTypeRestriction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::UxmlTypeRestriction>
constexpr  UnityEngine::UIElements::UxmlTypeRestriction::operator System::IEquatable_1<UnityEngine::UIElements::UxmlTypeRestriction>() const noexcept {
return System::IEquatable_1<UnityEngine::UIElements::UxmlTypeRestriction>(::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::UIElements::UxmlTypeRestriction::Equals(UnityEngine::UIElements::UxmlTypeRestriction other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UxmlTypeRestriction>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UxmlTypeRestriction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
// Ctor Parameters []
 UnityEngine::UIElements::UxmlTypeRestriction::UxmlTypeRestriction()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UxmlTypeRestriction>())) {}
 void UnityEngine::UIElements::UxmlTypeRestriction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UxmlTypeRestriction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
