#pragma once
namespace {
#include "MidiParser/zzzz__MidiTrack_def.hpp"
#include "MidiParser/zzzz__MidiEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::MidiParser::MidiTrack._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MidiParser::MidiTrack::*)()>(&::MidiParser::MidiTrack::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2278d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::MidiParser::MidiTrack::__set_Index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::MidiParser::MidiTrack::__get_Index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::MidiParser::MidiTrack::__set_MidiEvents(::System::Collections::Generic::List_1<::MidiParser::MidiEvent> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::MidiParser::MidiEvent>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::MidiParser::MidiEvent>>(value));
}
constexpr ::System::Collections::Generic::List_1<::MidiParser::MidiEvent> ::MidiParser::MidiTrack::__get_MidiEvents() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::MidiParser::MidiEvent>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::MidiParser::MidiTrack::MidiTrack()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MidiTrack>())) {}
 void ::MidiParser::MidiTrack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiTrack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
