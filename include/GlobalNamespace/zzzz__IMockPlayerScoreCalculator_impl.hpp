#pragma once
namespace {
#include "GlobalNamespace/zzzz__IMockPlayerScoreCalculator_def.hpp"
#include "GlobalNamespace/zzzz__MockNoteData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IMockPlayerScoreCalculator.GetScoreForNote
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::IMockPlayerScoreCalculator::*)(::GlobalNamespace::MockNoteData)>(&::GlobalNamespace::IMockPlayerScoreCalculator::GetScoreForNote)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IMockPlayerScoreCalculator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMockPlayerScoreCalculator>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 int32_t ::GlobalNamespace::IMockPlayerScoreCalculator::GetScoreForNote(::GlobalNamespace::MockNoteData noteData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMockPlayerScoreCalculator>::get(),
                            "GetScoreForNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockNoteData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, noteData);
}
} // end anonymous namespace
