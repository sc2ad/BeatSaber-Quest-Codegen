#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelChangedEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
constexpr void UnityEngine::UIElements::PanelChangedEventBase_1<T>::__set__originPanel_k__BackingField(UnityEngine::UIElements::IPanel value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::IPanel, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::IPanel>(value));
}
constexpr UnityEngine::UIElements::IPanel UnityEngine::UIElements::PanelChangedEventBase_1<T>::__get__originPanel_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::IPanel, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::PanelChangedEventBase_1<T>::__set__destinationPanel_k__BackingField(UnityEngine::UIElements::IPanel value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::IPanel, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::IPanel>(value));
}
constexpr UnityEngine::UIElements::IPanel UnityEngine::UIElements::PanelChangedEventBase_1<T>::__get__destinationPanel_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::IPanel, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::UIElements::IPanel UnityEngine::UIElements::PanelChangedEventBase_1<T>::get_originPanel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelChangedEventBase_1<T>>::get(),
                            "get_originPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IPanel, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::PanelChangedEventBase_1<T>::set_originPanel(UnityEngine::UIElements::IPanel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelChangedEventBase_1<T>>::get(),
                            "set_originPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::IPanel UnityEngine::UIElements::PanelChangedEventBase_1<T>::get_destinationPanel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelChangedEventBase_1<T>>::get(),
                            "get_destinationPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IPanel, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::PanelChangedEventBase_1<T>::set_destinationPanel(UnityEngine::UIElements::IPanel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelChangedEventBase_1<T>>::get(),
                            "set_destinationPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::PanelChangedEventBase_1<T>::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelChangedEventBase_1<T>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::PanelChangedEventBase_1<T>::LocalInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelChangedEventBase_1<T>>::get(),
                            "LocalInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 T UnityEngine::UIElements::PanelChangedEventBase_1<T>::GetPooled(UnityEngine::UIElements::IPanel originPanel, UnityEngine::UIElements::IPanel destinationPanel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelChangedEventBase_1<T>>::get(),
                            "GetPooled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, originPanel, destinationPanel);
}
 UnityEngine::UIElements::PanelChangedEventBase_1<T> UnityEngine::UIElements::PanelChangedEventBase_1<T>::New_ctor()  {
UnityEngine::UIElements::PanelChangedEventBase_1<T> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::PanelChangedEventBase_1<T>>())};
return o;
}
 void UnityEngine::UIElements::PanelChangedEventBase_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PanelChangedEventBase_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
