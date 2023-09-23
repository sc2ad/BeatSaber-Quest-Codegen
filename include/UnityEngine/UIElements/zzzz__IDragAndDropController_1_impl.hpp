#pragma once
#include "UnityEngine/UIElements/zzzz__IDragAndDropController_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::IDragAndDropController_1.CanStartDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IDragAndDropController_1::*)(System::Collections::Generic::IEnumerable_1<int32_t>)>(&UnityEngine::UIElements::IDragAndDropController_1::CanStartDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IDragAndDropController_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IDragAndDropController_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::IDragAndDropController_1.SetupDragAndDrop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::StartDragArgs (UnityEngine::UIElements::IDragAndDropController_1::*)(System::Collections::Generic::IEnumerable_1<int32_t>, bool)>(&UnityEngine::UIElements::IDragAndDropController_1::SetupDragAndDrop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IDragAndDropController_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IDragAndDropController_1>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::IDragAndDropController_1.HandleDragAndDrop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::DragVisualMode (UnityEngine::UIElements::IDragAndDropController_1::*)(TArgs)>(&UnityEngine::UIElements::IDragAndDropController_1::HandleDragAndDrop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IDragAndDropController_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IDragAndDropController_1>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::IDragAndDropController_1.OnDrop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IDragAndDropController_1::*)(TArgs)>(&UnityEngine::UIElements::IDragAndDropController_1::OnDrop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IDragAndDropController_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IDragAndDropController_1>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
 bool UnityEngine::UIElements::IDragAndDropController_1::CanStartDrag(System::Collections::Generic::IEnumerable_1<int32_t> itemIndices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IDragAndDropController_1>::get(),
                            "CanStartDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, itemIndices);
}
/// @param skipText: bool (default: false)
 UnityEngine::UIElements::StartDragArgs UnityEngine::UIElements::IDragAndDropController_1::SetupDragAndDrop(System::Collections::Generic::IEnumerable_1<int32_t> itemIndices, bool skipText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IDragAndDropController_1>::get(),
                            "SetupDragAndDrop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::StartDragArgs, false>(const_cast<void*>(instance), ___internal_method, itemIndices, skipText);
}
 UnityEngine::UIElements::DragVisualMode UnityEngine::UIElements::IDragAndDropController_1::HandleDragAndDrop(TArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IDragAndDropController_1>::get(),
                            "HandleDragAndDrop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::DragVisualMode, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void UnityEngine::UIElements::IDragAndDropController_1::OnDrop(TArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IDragAndDropController_1>::get(),
                            "OnDrop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
