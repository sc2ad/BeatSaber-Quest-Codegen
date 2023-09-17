#pragma once
namespace {
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartDissolvingEvent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteMirrorable.get_noteTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (::GlobalNamespace::INoteMirrorable::*)()>(&::GlobalNamespace::INoteMirrorable::get_noteTransform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::INoteMirrorable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteMirrorable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::INoteMirrorable.get_noteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteData (::GlobalNamespace::INoteMirrorable::*)()>(&::GlobalNamespace::INoteMirrorable::get_noteData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::INoteMirrorable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteMirrorable>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::INoteMirrorable.get_noteDidStartDissolvingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> (::GlobalNamespace::INoteMirrorable::*)()>(&::GlobalNamespace::INoteMirrorable::get_noteDidStartDissolvingEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::INoteMirrorable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteMirrorable>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 ::UnityEngine::Transform ::GlobalNamespace::INoteMirrorable::get_noteTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteMirrorable>::get(),
                            "get_noteTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::NoteData ::GlobalNamespace::INoteMirrorable::get_noteData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteMirrorable>::get(),
                            "get_noteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> ::GlobalNamespace::INoteMirrorable::get_noteDidStartDissolvingEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteMirrorable>::get(),
                            "get_noteDidStartDissolvingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
