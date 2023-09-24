#pragma once
#include "GlobalNamespace/zzzz__ValueDropdownController_1_impl.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityTypeSettingsDropdown_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: GlobalNamespace::ArcVisibilityTypeSettingsDropdown.GetNamedValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::ArcVisibilityType,::StringW>> (GlobalNamespace::ArcVisibilityTypeSettingsDropdown::*)()>(&GlobalNamespace::ArcVisibilityTypeSettingsDropdown::GetNamedValues)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x215220c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ArcVisibilityTypeSettingsDropdown),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ArcVisibilityTypeSettingsDropdown>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ArcVisibilityTypeSettingsDropdown._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ArcVisibilityTypeSettingsDropdown::*)()>(&GlobalNamespace::ArcVisibilityTypeSettingsDropdown::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2152370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ArcVisibilityTypeSettingsDropdown>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::ArcVisibilityType,::StringW>> GlobalNamespace::ArcVisibilityTypeSettingsDropdown::GetNamedValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ArcVisibilityTypeSettingsDropdown>::get(),
                            "GetNamedValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::ArcVisibilityType,::StringW>>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::ArcVisibilityTypeSettingsDropdown GlobalNamespace::ArcVisibilityTypeSettingsDropdown::New_ctor()  {
GlobalNamespace::ArcVisibilityTypeSettingsDropdown o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ArcVisibilityTypeSettingsDropdown>())};
return o;
}
 void GlobalNamespace::ArcVisibilityTypeSettingsDropdown::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ArcVisibilityTypeSettingsDropdown>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
