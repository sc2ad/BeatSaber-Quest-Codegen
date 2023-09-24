#pragma once
#include "UnityEngine/UIElements/zzzz__VerticalVirtualizationController_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FixedHeightVirtualizationController_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
 float_t UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::get_resolvedItemHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>>::get(),
                            "get_resolvedItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::VisibleItemPredicate(T i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>>::get(),
                            "VisibleItemPredicate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, i);
}
 UnityEngine::UIElements::FixedHeightVirtualizationController_1<T> UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::New_ctor(UnityEngine::UIElements::BaseVerticalCollectionView collectionView)  {
UnityEngine::UIElements::FixedHeightVirtualizationController_1<T> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>>(collectionView))};
return o;
}
 void UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::_ctor(UnityEngine::UIElements::BaseVerticalCollectionView collectionView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseVerticalCollectionView>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, collectionView);
}
 int32_t UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::GetIndexFromPosition(UnityEngine::Vector2 position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>>::get(),
                            "GetIndexFromPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, position);
}
 float_t UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::GetItemHeight(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>>::get(),
                            "GetItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::ScrollToItem(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>>::get(),
                            "ScrollToItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::Resize(UnityEngine::Vector2 size, int32_t layoutPass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, size, layoutPass);
}
 void UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::OnScroll(UnityEngine::Vector2 scrollOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>>::get(),
                            "OnScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scrollOffset);
}
 T UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>::GetOrMakeItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FixedHeightVirtualizationController_1<T>>::get(),
                            "GetOrMakeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
