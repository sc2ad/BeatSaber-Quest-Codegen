#pragma once
#include "GlobalNamespace/zzzz__ValueDropdownController_1_impl.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettingsDropdown_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_def.hpp"
//  Writing Method size for method: GlobalNamespace::NoteJumpDurationTypeSettingsDropdown.GetNamedValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::NoteJumpDurationTypeSettings,::StringW>> (GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::*)()>(&GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::GetNamedValues)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2154054;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::NoteJumpDurationTypeSettingsDropdown),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteJumpDurationTypeSettingsDropdown>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteJumpDurationTypeSettingsDropdown._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::*)()>(&GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2154148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteJumpDurationTypeSettingsDropdown>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::NoteJumpDurationTypeSettings,::StringW>> GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::GetNamedValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteJumpDurationTypeSettingsDropdown>::get(),
                            "GetNamedValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::NoteJumpDurationTypeSettings,::StringW>>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::NoteJumpDurationTypeSettingsDropdown()  : GlobalNamespace::ValueDropdownController_1<GlobalNamespace::NoteJumpDurationTypeSettings>(THROW_UNLESS(::il2cpp_utils::New<NoteJumpDurationTypeSettingsDropdown>())) {}
 void GlobalNamespace::NoteJumpDurationTypeSettingsDropdown::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteJumpDurationTypeSettingsDropdown>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
