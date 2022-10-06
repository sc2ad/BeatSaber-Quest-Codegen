// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: TsvReader
  class TsvReader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Polyglot::TsvReader);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::TsvReader*, "Polyglot", "TsvReader");
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.TsvReader
  // [TokenAttribute] Offset: FFFFFFFF
  class TsvReader : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x2A8DF34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TsvReader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Polyglot::TsvReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TsvReader*, creationType>()));
    }
    // static public System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> Parse(System.String src)
    // Offset: 0x2A8CD58
    static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>* Parse(::StringW src);
  }; // Polyglot.TsvReader
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::TsvReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Polyglot::TsvReader::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>* (*)(::StringW)>(&Polyglot::TsvReader::Parse)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::TsvReader*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src});
  }
};
