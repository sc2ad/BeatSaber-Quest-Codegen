// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Linq.Extensions
#include "Newtonsoft/Json/Linq/Extensions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::Extensions::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::Extensions::$$c*, "Newtonsoft.Json.Linq", "Extensions/<>c");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.Extensions/Newtonsoft.Json.Linq.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Extensions::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Newtonsoft.Json.Linq.Extensions/Newtonsoft.Json.Linq.<>c <>9
    static ::Newtonsoft::Json::Linq::Extensions::$$c* _get_$$9();
    // Set static field: static public readonly Newtonsoft.Json.Linq.Extensions/Newtonsoft.Json.Linq.<>c <>9
    static void _set_$$9(::Newtonsoft::Json::Linq::Extensions::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x1790664
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x17906C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Extensions::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::Extensions::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Extensions::$$c*, creationType>()));
    }
  }; // Newtonsoft.Json.Linq.Extensions/Newtonsoft.Json.Linq.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::Extensions::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Linq::Extensions::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::Extensions::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::Extensions::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
