// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.InvalidCastException
#include "System/InvalidCastException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Utilities
namespace Org::BouncyCastle::Utilities {
  // Forward declaring type: MemoableResetException
  class MemoableResetException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Utilities::MemoableResetException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::MemoableResetException*, "Org.BouncyCastle.Utilities", "MemoableResetException");
// Type namespace: Org.BouncyCastle.Utilities
namespace Org::BouncyCastle::Utilities {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.MemoableResetException
  // [TokenAttribute] Offset: FFFFFFFF
  class MemoableResetException : public ::System::InvalidCastException {
    public:
    // public System.Void .ctor(System.String msg)
    // Offset: 0x25A7BC8
    // Implemented from: System.InvalidCastException
    // Base method: System.Void InvalidCastException::.ctor(System.String msg)
    // Base method: System.Void SystemException::.ctor(System.String msg)
    // Base method: System.Void Exception::.ctor(System.String msg)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoableResetException* New_ctor(::StringW msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Utilities::MemoableResetException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoableResetException*, creationType>(msg)));
    }
  }; // Org.BouncyCastle.Utilities.MemoableResetException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::MemoableResetException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
