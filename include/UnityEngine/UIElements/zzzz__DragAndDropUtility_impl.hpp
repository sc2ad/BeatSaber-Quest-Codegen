#pragma once
#include "UnityEngine/UIElements/zzzz__DragAndDropUtility_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDrop_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::DragAndDropUtility.get_dragAndDrop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::IDragAndDrop (*)()>(&UnityEngine::UIElements::DragAndDropUtility::get_dragAndDrop)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2c92d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DragAndDropUtility>::get(),
                            "get_dragAndDrop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::DragAndDropUtility::__set_s_MakeClientFunc(System::Func_1<UnityEngine::UIElements::IDragAndDrop> value)  {
::cordl_internals::setStaticField<System::Func_1<UnityEngine::UIElements::IDragAndDrop>, "s_MakeClientFunc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DragAndDropUtility>::get>(std::forward<System::Func_1<UnityEngine::UIElements::IDragAndDrop>>(value));
}
 System::Func_1<UnityEngine::UIElements::IDragAndDrop> UnityEngine::UIElements::DragAndDropUtility::__get_s_MakeClientFunc()  {
return ::cordl_internals::getStaticField<System::Func_1<UnityEngine::UIElements::IDragAndDrop>, "s_MakeClientFunc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DragAndDropUtility>::get>();
}
 void UnityEngine::UIElements::DragAndDropUtility::__set_s_DragAndDrop(UnityEngine::UIElements::IDragAndDrop value)  {
::cordl_internals::setStaticField<UnityEngine::UIElements::IDragAndDrop, "s_DragAndDrop", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DragAndDropUtility>::get>(std::forward<UnityEngine::UIElements::IDragAndDrop>(value));
}
 UnityEngine::UIElements::IDragAndDrop UnityEngine::UIElements::DragAndDropUtility::__get_s_DragAndDrop()  {
return ::cordl_internals::getStaticField<UnityEngine::UIElements::IDragAndDrop, "s_DragAndDrop", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DragAndDropUtility>::get>();
}
 UnityEngine::UIElements::IDragAndDrop UnityEngine::UIElements::DragAndDropUtility::get_dragAndDrop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DragAndDropUtility>::get(),
                            "get_dragAndDrop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IDragAndDrop, false>(nullptr, ___internal_method);
}
