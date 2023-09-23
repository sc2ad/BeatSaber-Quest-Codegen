#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace System::IO {
struct FileAttributes;
}
// Forward declare root types
namespace System::IO {
struct MonoIOStat;
}
// Type: System.IO::MonoIOStat
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3617))
// CS Name: System.IO.MonoIOStat
struct CORDL_TYPE MonoIOStat : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "fileAttributes", ty: "System::IO::FileAttributes", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "CreationTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "LastAccessTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "LastWriteTime", ty: "int64_t", modifiers: "", def_value: None }]
constexpr MonoIOStat(System::IO::FileAttributes fileAttributes, int64_t Length, int64_t CreationTime, int64_t LastAccessTime, int64_t LastWriteTime) noexcept;


                    constexpr MonoIOStat(MonoIOStat const&) = default;
                    constexpr MonoIOStat(MonoIOStat&&) = default;
                    constexpr MonoIOStat& operator=(MonoIOStat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MonoIOStat& operator=(MonoIOStat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MonoIOStat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::IO::FileAttributes __declspec(property(get=__get_fileAttributes, put=__set_fileAttributes))  fileAttributes;

constexpr void __set_fileAttributes(System::IO::FileAttributes value) ;

constexpr System::IO::FileAttributes __get_fileAttributes() const;

 int64_t __declspec(property(get=__get_Length, put=__set_Length))  Length;

constexpr void __set_Length(int64_t value) ;

constexpr int64_t __get_Length() const;

 int64_t __declspec(property(get=__get_CreationTime, put=__set_CreationTime))  CreationTime;

constexpr void __set_CreationTime(int64_t value) ;

constexpr int64_t __get_CreationTime() const;

 int64_t __declspec(property(get=__get_LastAccessTime, put=__set_LastAccessTime))  LastAccessTime;

constexpr void __set_LastAccessTime(int64_t value) ;

constexpr int64_t __get_LastAccessTime() const;

 int64_t __declspec(property(get=__get_LastWriteTime, put=__set_LastWriteTime))  LastWriteTime;

constexpr void __set_LastWriteTime(int64_t value) ;

constexpr int64_t __get_LastWriteTime() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
DEFINE_IL2CPP_ARG_TYPE(System::IO::MonoIOStat, "System.IO", "MonoIOStat");
