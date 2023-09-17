#pragma once
#include "GlobalNamespace/zzzz__SelectableStateController_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectableStateController_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectableStateController_1::*)()>(&::GlobalNamespace::SelectableStateController_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SelectableStateController_1::__set__component(T value)  {
::cordl_internals::setInstanceField<T, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::GlobalNamespace::SelectableStateController_1::__get__component() const {
return ::cordl_internals::getInstanceField<T, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::SelectableStateController_1::SelectableStateController_1()  : ::GlobalNamespace::SelectableStateController(THROW_UNLESS(::il2cpp_utils::New<SelectableStateController_1>())) {}
 void ::GlobalNamespace::SelectableStateController_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectableStateController_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
