#pragma once
#include "GlobalNamespace/zzzz__IGameNoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
//  Writing Method size for method: GlobalNamespace::IGameNoteMirrorable.get_noteMovement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteMovement (GlobalNamespace::IGameNoteMirrorable::*)()>(&GlobalNamespace::IGameNoteMirrorable::get_noteMovement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IGameNoteMirrorable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IGameNoteMirrorable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IGameNoteMirrorable.get_noteVisualModifierType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteVisualModifierType (GlobalNamespace::IGameNoteMirrorable::*)()>(&GlobalNamespace::IGameNoteMirrorable::get_noteVisualModifierType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IGameNoteMirrorable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IGameNoteMirrorable>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IGameNoteMirrorable.get_gameplayType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__NoteData__GameplayType (GlobalNamespace::IGameNoteMirrorable::*)()>(&GlobalNamespace::IGameNoteMirrorable::get_gameplayType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IGameNoteMirrorable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IGameNoteMirrorable>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::INoteMirrorable
constexpr  GlobalNamespace::IGameNoteMirrorable::operator GlobalNamespace::INoteMirrorable() const noexcept {
return GlobalNamespace::INoteMirrorable(::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::NoteMovement GlobalNamespace::IGameNoteMirrorable::get_noteMovement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IGameNoteMirrorable>::get(),
                            "get_noteMovement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteMovement, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::NoteVisualModifierType GlobalNamespace::IGameNoteMirrorable::get_noteVisualModifierType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IGameNoteMirrorable>::get(),
                            "get_noteVisualModifierType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteVisualModifierType, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__NoteData__GameplayType GlobalNamespace::IGameNoteMirrorable::get_gameplayType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IGameNoteMirrorable>::get(),
                            "get_gameplayType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__NoteData__GameplayType, false>(const_cast<void*>(instance), ___internal_method);
}
