#pragma once
#include "GlobalNamespace/zzzz__SelectableStateController_impl.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
constexpr void GlobalNamespace::SelectableStateController_1<T>::__set__component(T value)  {
::cordl_internals::setInstanceField<T, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::SelectableStateController_1<T>::__get__component() const {
return ::cordl_internals::getInstanceField<T, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::SelectableStateController_1<T> GlobalNamespace::SelectableStateController_1<T>::New_ctor()  {
GlobalNamespace::SelectableStateController_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SelectableStateController_1<T>>())};
return o;
}
 void GlobalNamespace::SelectableStateController_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectableStateController_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
