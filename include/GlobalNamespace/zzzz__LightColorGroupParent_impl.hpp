#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__LightColorGroupParent_def.hpp"
#include "GlobalNamespace/zzzz__IEditTimeValidated_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupParent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorGroupParent::*)()>(&::GlobalNamespace::LightColorGroupParent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x225df68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupParent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IEditTimeValidated
constexpr  ::GlobalNamespace::LightColorGroupParent::operator ::GlobalNamespace::IEditTimeValidated() const noexcept {
return ::GlobalNamespace::IEditTimeValidated(::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::LightColorGroupParent::LightColorGroupParent()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<LightColorGroupParent>())) {}
 void ::GlobalNamespace::LightColorGroupParent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupParent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
