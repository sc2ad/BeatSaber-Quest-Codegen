#pragma once
#include "UnityEngine/UIElements/zzzz__BaseReorderableDragAndDropController_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__ListViewReorderableDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__IListDragAndDropArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListView_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewReorderableDragAndDropController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewReorderableDragAndDropController::*)(::UnityEngine::UIElements::ListView)>(&::UnityEngine::UIElements::ListViewReorderableDragAndDropController::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2c90228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListView>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewReorderableDragAndDropController.HandleDragAndDrop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragVisualMode (::UnityEngine::UIElements::ListViewReorderableDragAndDropController::*)(::UnityEngine::UIElements::IListDragAndDropArgs)>(&::UnityEngine::UIElements::ListViewReorderableDragAndDropController::HandleDragAndDrop)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2c9028c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::ListViewReorderableDragAndDropController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewReorderableDragAndDropController.OnDrop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewReorderableDragAndDropController::*)(::UnityEngine::UIElements::IListDragAndDropArgs)>(&::UnityEngine::UIElements::ListViewReorderableDragAndDropController::OnDrop)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2c90428;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::ListViewReorderableDragAndDropController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::ListViewReorderableDragAndDropController::__set_m_ListView(::UnityEngine::UIElements::ListView value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ListView, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::ListView>(value));
}
constexpr ::UnityEngine::UIElements::ListView ::UnityEngine::UIElements::ListViewReorderableDragAndDropController::__get_m_ListView() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ListView, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "view", ty: "::UnityEngine::UIElements::ListView", modifiers: "", def_value: None }]
 ::UnityEngine::UIElements::ListViewReorderableDragAndDropController::ListViewReorderableDragAndDropController(::UnityEngine::UIElements::ListView view)  : ::UnityEngine::UIElements::BaseReorderableDragAndDropController(THROW_UNLESS(::il2cpp_utils::New<ListViewReorderableDragAndDropController>(view))) {}
 void ::UnityEngine::UIElements::ListViewReorderableDragAndDropController::_ctor(::UnityEngine::UIElements::ListView view)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListView>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, view);
}
 ::UnityEngine::UIElements::DragVisualMode ::UnityEngine::UIElements::ListViewReorderableDragAndDropController::HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController>::get(),
                            "HandleDragAndDrop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IListDragAndDropArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragVisualMode, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void ::UnityEngine::UIElements::ListViewReorderableDragAndDropController::OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController>::get(),
                            "OnDrop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IListDragAndDropArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
} // end anonymous namespace
