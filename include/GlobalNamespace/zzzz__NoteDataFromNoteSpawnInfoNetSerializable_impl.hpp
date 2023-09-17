#pragma once
#include "GlobalNamespace/zzzz__NoteData_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__NoteDataFromNoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable::*)(::GlobalNamespace::NoteSpawnInfoNetSerializable)>(&::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x20de67c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteSpawnInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "noteSpawnInfo", ty: "::GlobalNamespace::NoteSpawnInfoNetSerializable", modifiers: "", def_value: None }]
 ::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable::NoteDataFromNoteSpawnInfoNetSerializable(::GlobalNamespace::NoteSpawnInfoNetSerializable noteSpawnInfo)  : ::GlobalNamespace::NoteData(THROW_UNLESS(::il2cpp_utils::New<NoteDataFromNoteSpawnInfoNetSerializable>(noteSpawnInfo))) {}
 void ::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable::_ctor(::GlobalNamespace::NoteSpawnInfoNetSerializable noteSpawnInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteSpawnInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteSpawnInfo);
}
} // end anonymous namespace
