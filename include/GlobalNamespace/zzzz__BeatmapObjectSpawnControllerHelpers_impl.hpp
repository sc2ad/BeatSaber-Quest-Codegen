#pragma once
namespace {
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnControllerHelpers_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnControllerHelpers.GetNoteJumpValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::PlayerSpecificSettings, float_t, ByRef<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType>, ByRef<float_t>)>(&::GlobalNamespace::BeatmapObjectSpawnControllerHelpers::GetNoteJumpValues)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2236d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnControllerHelpers>::get(),
                            "GetNoteJumpValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::BeatmapObjectSpawnControllerHelpers::GetNoteJumpValues(::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, float_t defaultNoteJumpStartBeatOffset, ByRef<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType> noteJumpValueType, ByRef<float_t> noteJumpValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnControllerHelpers>::get(),
                            "GetNoteJumpValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, playerSpecificSettings, defaultNoteJumpStartBeatOffset, noteJumpValueType, noteJumpValue);
}
} // end anonymous namespace
