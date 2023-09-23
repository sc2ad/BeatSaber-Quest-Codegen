#pragma once
#include "GlobalNamespace/zzzz__INoteMovementProvider_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
//  Writing Method size for method: GlobalNamespace::INoteMovementProvider.get_noteMovement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteMovement (GlobalNamespace::INoteMovementProvider::*)()>(&GlobalNamespace::INoteMovementProvider::get_noteMovement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::INoteMovementProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INoteMovementProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::NoteMovement GlobalNamespace::INoteMovementProvider::get_noteMovement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INoteMovementProvider>::get(),
                            "get_noteMovement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteMovement, false>(const_cast<void*>(instance), ___internal_method);
}
