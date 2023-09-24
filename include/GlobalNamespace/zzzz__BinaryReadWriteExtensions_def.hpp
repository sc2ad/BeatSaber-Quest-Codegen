#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Pose;
}
namespace System::IO {
class BinaryWriter;
}
namespace System::IO {
class BinaryReader;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BinaryReadWriteExtensions;
}
// Type: ::BinaryReadWriteExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5442))
// CS Name: BinaryReadWriteExtensions
class CORDL_TYPE BinaryReadWriteExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BinaryReadWriteExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryReadWriteExtensions", modifiers: " const&", def_value: None }]
constexpr BinaryReadWriteExtensions(BinaryReadWriteExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryReadWriteExtensions", modifiers: "&&", def_value: None }]
constexpr BinaryReadWriteExtensions(BinaryReadWriteExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryReadWriteExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryReadWriteExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryReadWriteExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryReadWriteExtensions& operator=(BinaryReadWriteExtensions&& o) noexcept = default;
  constexpr BinaryReadWriteExtensions& operator=(BinaryReadWriteExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Write addr 0x2114200 size 0x88 virtual false final false
static void Write(System::IO::BinaryWriter binaryWriter, UnityEngine::Color color) ;

/// @brief Method ReadColor addr 0x2114288 size 0x90 virtual false final false
static UnityEngine::Color ReadColor(System::IO::BinaryReader binaryReader) ;

/// @brief Method Write addr 0x2114318 size 0x64 virtual false final false
static void Write(System::IO::BinaryWriter binaryWriter, UnityEngine::Vector3 vector) ;

/// @brief Method ReadVector3 addr 0x211437c size 0x6c virtual false final false
static UnityEngine::Vector3 ReadVector3(System::IO::BinaryReader binaryReader) ;

/// @brief Method Write addr 0x21143e8 size 0x88 virtual false final false
static void Write(System::IO::BinaryWriter binaryWriter, UnityEngine::Quaternion quaternion) ;

/// @brief Method ReadQuaternion addr 0x2114470 size 0x90 virtual false final false
static UnityEngine::Quaternion ReadQuaternion(System::IO::BinaryReader binaryReader) ;

/// @brief Method Write addr 0x2114500 size 0x34 virtual false final false
static void Write(System::IO::BinaryWriter binaryWriter, UnityEngine::Pose pose) ;

/// @brief Method ReadPose addr 0x2114534 size 0x1084 virtual false final false
static UnityEngine::Pose ReadPose(System::IO::BinaryReader binaryReader) ;

/// @brief Method WriteListOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void WriteListOf(System::IO::BinaryWriter binaryWriter, System::Collections::Generic::IList_1<T> list, System::Action_2<System::IO::BinaryWriter,T> elementWriter) ;

/// @brief Method ReadListOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::List_1<T> ReadListOf(System::IO::BinaryReader binaryReader, System::Func_2<System::IO::BinaryReader,T> elementReader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BinaryReadWriteExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BinaryReadWriteExtensions, "", "BinaryReadWriteExtensions");
