#pragma once
#include "GlobalNamespace/zzzz__INoteVisualModifierTypeProvider_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
//  Writing Method size for method: GlobalNamespace::INoteVisualModifierTypeProvider.get_noteVisualModifierType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteVisualModifierType (GlobalNamespace::INoteVisualModifierTypeProvider::*)()>(&GlobalNamespace::INoteVisualModifierTypeProvider::get_noteVisualModifierType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::INoteVisualModifierTypeProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INoteVisualModifierTypeProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::NoteVisualModifierType GlobalNamespace::INoteVisualModifierTypeProvider::get_noteVisualModifierType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INoteVisualModifierTypeProvider>::get(),
                            "get_noteVisualModifierType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteVisualModifierType, false>(const_cast<void*>(instance), ___internal_method);
}
