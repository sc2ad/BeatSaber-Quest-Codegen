#pragma once
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__Datatype_timeNoTimeZone_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_timeNoTimeZone._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Datatype_timeNoTimeZone::*)()>(&::System::Xml::Schema::Datatype_timeNoTimeZone::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2726570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_timeNoTimeZone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Xml::Schema::Datatype_timeNoTimeZone::Datatype_timeNoTimeZone()  : ::System::Xml::Schema::Datatype_dateTimeBase(THROW_UNLESS(::il2cpp_utils::New<Datatype_timeNoTimeZone>())) {}
 void ::System::Xml::Schema::Datatype_timeNoTimeZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_timeNoTimeZone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
