#pragma once
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IReorderable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDropController_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IListDragAndDropArgs_def.hpp"
/// @brief Convert operator to UnityEngine::UIElements::IDragAndDropController_1<UnityEngine::UIElements::IListDragAndDropArgs>
constexpr  UnityEngine::UIElements::ICollectionDragAndDropController::operator UnityEngine::UIElements::IDragAndDropController_1<UnityEngine::UIElements::IListDragAndDropArgs>() const noexcept {
return UnityEngine::UIElements::IDragAndDropController_1<UnityEngine::UIElements::IListDragAndDropArgs>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::UIElements::IReorderable
constexpr  UnityEngine::UIElements::ICollectionDragAndDropController::operator UnityEngine::UIElements::IReorderable() const noexcept {
return UnityEngine::UIElements::IReorderable(::bs_hook::Il2CppWrapperType::instance);
}
